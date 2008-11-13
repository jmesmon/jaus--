////////////////////////////////////////////////////////////////////////////////////
///
///  \file querysubsystemlist.h
///  \brief This file contains data structure for JAUS_QUERY_SUBSYSTEM_LIST
///  message.
///
///  <br>Author(s): Daniel Barber
///  <br>Created: 24 July 2007
///  <br>Last Modified: 24 July 2007
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
#ifndef __JAUS_QUERY_SUBSYSTEM_LIST_H
#define __JAUS_QUERY_SUBSYSTEM_LIST_H

#include "jaus/messages/message.h"

#ifdef __cplusplus

namespace Jaus
{    
    ////////////////////////////////////////////////////////////////////////////////////
    ///
    ///   \class QuerySubsystemList
    ///   \brief Query subsystem list message.   
    ///   
    ///   This message shall request the Report Subsystem List message.  There are
    ///   no data fields associated with this message.
    ///
    ////////////////////////////////////////////////////////////////////////////////////
    class JAUS_MSG_DLL QuerySubsystemList : public Message
    {
    public:
        QuerySubsystemList();
        QuerySubsystemList(const QuerySubsystemList &msg);
        ~QuerySubsystemList();
        virtual int WriteMessageBody(Stream &msg, const UShort version) const { return 0; }
        virtual int ReadMessageBody(const Stream &msg, const UShort version) { return 0; }
        virtual Message* Clone() const { return new QuerySubsystemList(*this); }
        virtual UShort GetPresenceVectorSize(const UShort version = JAUS_DEFAULT_VERSION) const { return 0; }
        virtual UInt GetPresenceVectorMask(const UShort version = JAUS_DEFAULT_VERSION) const { return 0; }
        virtual void ClearMessageBody() {}
        QuerySubsystemList &operator=(const QuerySubsystemList &msg);
    };
}

#endif

#endif 

/*  End of File */