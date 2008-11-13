////////////////////////////////////////////////////////////////////////////////////
///
///  \file queryimage.h
///  \brief This file contains the message structure for Query Image.
///
///  <br>Author(s): Daniel Barber
///  <br>Created: 20 February 2007
///  <br>Last Modified: 5 April 2008
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
#ifndef __JAUS_QUERY_IMAGE_H
#define __JAUS_QUERY_IMAGE_H

#include "jaus/messages/message.h"

#ifdef __cplusplus

namespace Jaus
{
    ////////////////////////////////////////////////////////////////////////////////////
    ///
    ///   \class QueryImage
    ///   \brief Used to query and image from a Visual Sensor Component.   
    ///   
    ///   The Query Image message can be used to retrieve one image at a time from
    ///   the currently selected camera. For streaming video, it is recommended that
    ///   the Service Connection be used. For streaming video outside of a JAUS
    ///   controlled transmission such as a dedicated analog RF link, the JAUS message
    ///   set shall be used to control the flow. JAUS messages for this control are
    ///   provided by the core message set: Resume and Standby. The response to the
    ///   Query Image message shall be a Code 4807h: Report Image message.
    ///
    ////////////////////////////////////////////////////////////////////////////////////
    class JAUS_MSG_DLL QueryImage : public Message
    {
    public:
        QueryImage();
        QueryImage(const QueryImage &msg);
        ~QueryImage();
        virtual int WriteMessageBody(Stream& msg, const UShort version) const { return 0; }
        virtual int ReadMessageBody(const Stream& msg, const UShort version) { return 0; }
        virtual void ClearMessageBody() {}
        virtual Message* Clone() const { return new QueryImage(*this); }
        virtual UShort GetPresenceVectorSize(const UShort version = JAUS_DEFAULT_VERSION) const { return 0; }
        virtual UInt GetPresenceVectorMask(const UShort version = JAUS_DEFAULT_VERSION) const { return 0; }
        QueryImage &operator=(const QueryImage &msg);
    };
}

#endif

#endif 

/*  End of File */