////////////////////////////////////////////////////////////////////////////////////
///
///  \file nodeconnection.h
///  \brief File contains the NodeConnection class which is used to create
///         connections to other Node Managers.
///
///  <br>Author(s): Daniel Barber
///  <br>Created: 28 March 2008
///  <br>Last Modified: 5 March 2008
///  <br>Copyright (c) 2008
///  <br>Applied Cognition and Training in Immersive Virtual Environments
///  <br>(ACTIVE) Laboratory
///  <br>Institute for Simulation and Training (IST)
///  <br>University of Central Florida (UCF)
///  <br>All rights reserved.
///  <br>Email: dbarber@ist.ucf.edu
///  <br>Web:  http://active.ist.ucf.edu
///
///  Redistribution and use in source and binary forms, with or without
///  modification, are permitted provided that the following conditions are met:
///      * Redistributions of source code must retain the above copyright
///        notice, this list of conditions and the following disclaimer.
///      * Redistributions in binary form must reproduce the above copyright
///        notice, this list of conditions and the following disclaimer in the
///        documentation and/or other materials provided with the distribution.
///      * Neither the name of the ACTIVE LAB, IST, UCF, nor the
///        names of its contributors may be used to endorse or promote products
///        derived from this software without specific prior written permission.
/// 
///  THIS SOFTWARE IS PROVIDED BY THE ACTIVE LAB''AS IS'' AND ANY
///  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
///  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
///  DISCLAIMED. IN NO EVENT SHALL UCF BE LIABLE FOR ANY
///  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
///  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
///  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
///  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
///  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
///  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///
////////////////////////////////////////////////////////////////////////////////////
#ifndef __JAUS_NODE_CONNECTION__H
#define __JAUS_NODE_CONNECTION__H

#include <string>
#include "jaus/components/transport/transport.h"

namespace Jaus
{
    ////////////////////////////////////////////////////////////////////////////////////
    ///
    ///   \class NodeConnection
    ///   \brief The NodeConnection class is used to create a connection to a 
    ///          Node Manager using any available transport medium (shared memory,
    ///          UDP, TCP, etc.)
    ///
    ////////////////////////////////////////////////////////////////////////////////////
    class JAUS_CMP_DLL NodeConnection : public StreamCallback
    {
    public:
        // Constructor.
        NodeConnection();
        // Destructor.
        ~NodeConnection();
        // Creates a connection to the Node with the given ID.
        int CreateConnection(const Address& id,
                             StreamCallback* cb = NULL,
                             const std::string* host = NULL,
                             const bool udp = true);
        // Create a serial port connection.
        int CreateConnection(const Address& nodeID,
                             StreamCallback* cb,
                             const std::string& port,                             
                             const unsigned int baud,
                             const unsigned int bits = 8,
                             const unsigned int parity = 0,
                             const unsigned int stop = 1);
        // Shutsdown the connection.
        int Shutdown();
        // Sends the serialized data to the node.
        int SendStream(const Stream& stream);
        // Received data first arrives here, and is then passed to connection handler.
        virtual void ProcessStreamCallback(const Stream& msg,
                                           const Header* info,
                                           const StreamCallback::Transport transport,
                                           void* additionalData);
        Address mID;                    ///<  ID of the destination.
        volatile bool mDiscoveryFlag;   ///<  Was this connection manually set, or discovered dynamically?
        Transport mConnectionType;      ///<  Type of connection.
        StreamCallback* mpCallback;     ///<  Callback to the connection handler.
        JSharedMemory* mpSharedMemory;  ///<  Shared memory connection.
        JUDPClient* mpUDP;              ///<  UDP connection.
        JTCPClient* mpTCP;              ///<  TCP connection.
        JSerial* mpSerial;              ///<  Serial port connection.
        volatile unsigned int mSendTimeMs;       ///<  Last time data was sent.
        volatile unsigned int mRecvTimeMs;       ///<  Last time data was received from node.
        int mNetworkInterface;                   ///<  ID of network interface to use (default is -1 or any).
    };
};

#endif
/*  End of File */
