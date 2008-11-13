////////////////////////////////////////////////////////////////////////////////////
///
///  \file rejectcomponentcontrol.h
///  \brief This file contains data structures for the JAUS_REJECT_COMPONENT_CONTROL
///  message belonging to the CORE set of JAUS messages.
///
///  <br>Author(s): Daniel Barber
///  <br>Created: 20 February 2007
///  <br>Last Modified: 20 July 2007
///  <br>Copyright (c) 2007
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
#ifndef __JAUS_REJECT_COMPONENT_CONTROL_H
#define __JAUS_REJECT_COMPONENT_CONTROL_H

#include "jaus/messages/message.h"

#ifdef __cplusplus

namespace Jaus
{
    ////////////////////////////////////////////////////////////////////////////////////
    ///
    ///   \class RejectComponentControl
    ///   \brief Response when a component rejects another components request
    ///   to take exclusive control. Part of the core set of messages in JAUS.    
    ///   
    ///   The Reject Command message is used to notify a component that it does
    ///   not accept control from that component.  Control shall be rejected when a 
    ///   component with a higher authority request control or when a service
    ///   connection with a component with higher authority is active.
    ///
    ////////////////////////////////////////////////////////////////////////////////////
    class JAUS_MSG_DLL RejectComponentControl : public Message
    {
    public:
        RejectComponentControl();
        RejectComponentControl(const RejectComponentControl &msg);
        ~RejectComponentControl();
        virtual int WriteMessageBody(Stream& msg, const UShort version) const { return 0; }
        virtual int ReadMessageBody(const Stream& msg, const UShort version) { return 0; }
        virtual Message* Clone() const { return new RejectComponentControl(*this); }
        virtual void ClearMessageBody() {}
        virtual UShort GetPresenceVectorSize(const UShort version = JAUS_DEFAULT_VERSION) const;
        virtual UInt GetPresenceVectorMask(const UShort version = JAUS_DEFAULT_VERSION) const;
        RejectComponentControl &operator=(const RejectComponentControl &msg);
    };
}

#endif

#endif 

/*  End of File */