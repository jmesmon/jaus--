////////////////////////////////////////////////////////////////////////////////////
///
///  \file setdatalinkstate.h
///  \brief Implementation of the Set Data Link State command message.
///
///  <br>Author(s): Daniel Barber
///  <br>Created: 6 August 2008
///  <br>Last Modified: 6 August 2008
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
#ifndef __JAUS_SET_DATA_LINK_STATE_H
#define __JAUS_SET_DATA_LINK_STATE_H

#include "jaus/messages/message.h"

#ifdef __cplusplus

namespace Jaus
{
    ////////////////////////////////////////////////////////////////////////////////////
    ///
    ///   \class SetDataLinkState
    ///   \brief This message is used to set the state of the Communicator's
    ///   desired data link to other subsystems.  The data link will remain in a
    ///   selected state until commanded to change or the data link fails.
    ///
    ////////////////////////////////////////////////////////////////////////////////////
    class JAUS_MSG_DLL SetDataLinkState : public Message
    {
    public:
        /*! Data link state values */
        enum State
        {
            Off = 0,
            On,
            Standby
        };
        SetDataLinkState();
        SetDataLinkState(const SetDataLinkState &msg);
        virtual ~SetDataLinkState();
        void SetState(const Byte state);
        Byte GetState() const { return mState; }
        virtual int WriteMessageBody(Stream& msg, const UShort version) const;
        virtual int ReadMessageBody(const Stream& msg, const UShort version);
        virtual void ClearMessageBody();
        virtual Message* Clone() const { return new SetDataLinkState(*this); }
        virtual UShort GetPresenceVectorSize(const UShort version = JAUS_DEFAULT_VERSION) const;
        virtual UInt GetPresenceVectorMask(const UShort version = JAUS_DEFAULT_VERSION) const;
        SetDataLinkState &operator=(const SetDataLinkState &msg);
    protected:
        Byte mState;  ///<  0 = off, 1 = 0, 2 = standby, 3-255 reserved.
    };
}

#endif

#endif 

/*  End of File */
