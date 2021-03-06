////////////////////////////////////////////////////////////////////////////////////
///
///  \file setwrencheffort.cpp
///  \brief This file contains the implementation of a JAUS message.
///
///  <br>Author(s): Bo Sun
///  <br>Created: 24 November 2009
///  <br>Copyright (c) 2009
///  <br>Applied Cognition and Training in Immersive Virtual Environments
///  <br>(ACTIVE) Laboratory
///  <br>Institute for Simulation and Training (IST)
///  <br>University of Central Florida (UCF)
///  <br>All rights reserved.
///  <br>Email: bsun@ist.ucf.edu
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
#include "jaus/mobility/drivers/reportwrencheffort.h"
#include "jaus/core/scaledinteger.h"

using namespace JAUS;


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Constructor, initializes default values.
///
///   \param[in] src Source ID of message sender.
///   \param[in] dest Destination ID of message.
///
////////////////////////////////////////////////////////////////////////////////////
ReportWrenchEffort::ReportWrenchEffort(const Address& dest, const Address& src) : Message(REPORT_WRENCH_EFFORT, dest, src)
{
    mPresenceVector = 0;
    mPropulsiveLinearEffortX = 0;             
    mPropulsiveLinearEffortY = 0;             
    mPropulsiveLinearEffortZ = 0;             
    mPropulsiveRotationalEffortX = 0;             
    mPropulsiveRotationalEffortY = 0;             
    mPropulsiveRotationalEffortZ = 0;             
    mResistiveLinearEffortX = 0;             
    mResistiveLinearEffortY = 0;             
    mResistiveLinearEffortZ = 0;             
    mResistiveRotationalEffortX = 0;             
    mResistiveRotationalEffortY = 0;             
    mResistiveRotationalEffortZ = 0;   
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Copy constructor.
///
////////////////////////////////////////////////////////////////////////////////////
ReportWrenchEffort::ReportWrenchEffort(const ReportWrenchEffort& message) : Message(REPORT_WRENCH_EFFORT)
{
    mPresenceVector = 0;
    mPropulsiveLinearEffortX = 0;             
    mPropulsiveLinearEffortY = 0;             
    mPropulsiveLinearEffortZ = 0;             
    mPropulsiveRotationalEffortX = 0;             
    mPropulsiveRotationalEffortY = 0;             
    mPropulsiveRotationalEffortZ = 0;             
    mResistiveLinearEffortX = 0;             
    mResistiveLinearEffortY = 0;             
    mResistiveLinearEffortZ = 0;             
    mResistiveRotationalEffortX = 0;             
    mResistiveRotationalEffortY = 0;             
    mResistiveRotationalEffortZ = 0;   
    *this = message;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Destructor.
///
////////////////////////////////////////////////////////////////////////////////////
ReportWrenchEffort::~ReportWrenchEffort()
{
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of effort [-100,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetPropulsiveLinearEffortX(const double percent)
{
    if(percent >= -100.0 && percent <= 100.0)
    {
        mPropulsiveLinearEffortX = percent;
        mPresenceVector |= PresenceVector::PropulsiveLinearEffortX;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of effort [-100,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetPropulsiveLinearEffortY(const double percent)
{
    if(percent >= -100.0 && percent <= 100.0)
    {
        mPropulsiveLinearEffortY = percent;
        mPresenceVector |= PresenceVector::PropulsiveLinearEffortY;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of effort [-100,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetPropulsiveLinearEffortZ(const double percent)
{
    if(percent >= -100.0 && percent <= 100.0)
    {
        mPropulsiveLinearEffortZ = percent;
        mPresenceVector |= PresenceVector::PropulsiveLinearEffortZ;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of effort [-100,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetPropulsiveRotationalEffortX(const double percent)
{
    if(percent >= -100.0 && percent <= 100.0)
    {
        mPropulsiveRotationalEffortX = percent;
        mPresenceVector |= PresenceVector::PropulsiveRotationalEffortX;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of effort [-100,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetPropulsiveRotationalEffortY(const double percent)
{
    if(percent >= -100.0 && percent <= 100.0)
    {
        mPropulsiveRotationalEffortY = percent;
        mPresenceVector |= PresenceVector::PropulsiveRotationalEffortY;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of effort [-100,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetPropulsiveRotationalEffortZ(const double percent)
{
    if(percent >= -100.0 && percent <= 100.0)
    {
        mPropulsiveRotationalEffortZ = percent;
        mPresenceVector |= PresenceVector::PropulsiveRotationalEffortZ;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of resistive effort [0,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetResistiveLinearEffortX(const double percent)
{
    if(percent >= 0 && percent <= 100.0)
    {
        mResistiveLinearEffortX = percent;
        mPresenceVector |= PresenceVector::ResistiveLinearEffortX;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of resistive effort [0,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetResistiveLinearEffortY(const double percent)
{
    if(percent >= 0 && percent <= 100.0)
    {
        mResistiveLinearEffortY = percent;
        mPresenceVector |= PresenceVector::ResistiveLinearEffortY;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of resistive effort [0,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetResistiveLinearEffortZ(const double percent)
{
    if(percent >= 0 && percent <= 100.0)
    {
        mResistiveLinearEffortZ = percent;
        mPresenceVector |= PresenceVector::ResistiveLinearEffortZ;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of resistive effort [0,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetResistiveRotationalEffortX(const double percent)
{
    if(percent >= 0 && percent <= 100.0)
    {
        mResistiveRotationalEffortX = percent;
        mPresenceVector |= PresenceVector::ResistiveRotationalEffortX;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of resistive effort [0,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetResistiveRotationalEffortY(const double percent)
{
    if(percent >= 0 && percent <= 100.0)
    {
        mResistiveRotationalEffortY = percent;
        mPresenceVector |= PresenceVector::ResistiveRotationalEffortY;
        return true;
    }
    return false;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets the wrench effort value along an axis and sets the bit for
///   the field in the presence vector.
///
///   \param[in] percent Percentage of resistive effort [0,100].
///
///   \return true on success, otherwise false.
///
////////////////////////////////////////////////////////////////////////////////////
bool ReportWrenchEffort::SetResistiveRotationalEffortZ(const double percent)
{
    if(percent >= 0 && percent <= 100.0)
    {
        mResistiveRotationalEffortZ = percent;
        mPresenceVector |= PresenceVector::ResistiveRotationalEffortZ;
        return true;
    }
    return false;
}



////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Writes message payload to the packet.
///
///   Message contents are written to the packet following the JAUS standard.
///
///   \param[out] packet Packet to write payload to.
///
///   \return -1 on error, otherwise number of bytes written.
///
////////////////////////////////////////////////////////////////////////////////////
int ReportWrenchEffort::WriteMessageBody(Packet& packet) const
{
    int expected = USHORT_SIZE;
    int written = 0;

    written += packet.Write(mPresenceVector);

    if((mPresenceVector & PresenceVector::PropulsiveLinearEffortX) > 0)
    {
        expected += USHORT_SIZE;
        written += ScaledInteger::Write(packet, mPropulsiveLinearEffortX, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveLinearEffortY) > 0)
    {
        expected += USHORT_SIZE;
        written += ScaledInteger::Write(packet, mPropulsiveLinearEffortY, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveLinearEffortZ) > 0)
    {
        expected += USHORT_SIZE;
        written += ScaledInteger::Write(packet, mPropulsiveLinearEffortZ, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveRotationalEffortX) > 0)
    {
        expected += USHORT_SIZE;
        written += ScaledInteger::Write(packet, mPropulsiveRotationalEffortX, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveRotationalEffortY) > 0)
    {
        expected += USHORT_SIZE;
        written += ScaledInteger::Write(packet, mPropulsiveRotationalEffortY, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveRotationalEffortZ) > 0)
    {
        expected += USHORT_SIZE;
        written += ScaledInteger::Write(packet, mPropulsiveRotationalEffortZ, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::ResistiveLinearEffortX) > 0)
    {
        expected += BYTE_SIZE;
        written += ScaledInteger::Write(packet, mResistiveLinearEffortX, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveLinearEffortY) > 0)
    {
        expected += BYTE_SIZE;
        written += ScaledInteger::Write(packet, mResistiveLinearEffortY, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveLinearEffortZ) > 0)
    {
        expected += BYTE_SIZE;
        written += ScaledInteger::Write(packet, mResistiveLinearEffortZ, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveRotationalEffortX) > 0)
    {
        expected += BYTE_SIZE;
        written += ScaledInteger::Write(packet, mResistiveRotationalEffortX, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveRotationalEffortY) > 0)
    {
        expected += BYTE_SIZE;
        written += ScaledInteger::Write(packet, mResistiveRotationalEffortY, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveRotationalEffortZ) > 0)
    {
        expected += BYTE_SIZE;
        written += ScaledInteger::Write(packet, mResistiveRotationalEffortZ, 100.0, 0.0, ScaledInteger::Byte);
    }

    return expected == written ? written : -1;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Reads message payload from the packet.
///
///   Message contents are read from the packet following the JAUS standard.
///
///   \param[in] packet Packet containing message payload data to read.
///
///   \return -1 on error, otherwise number of bytes written.
///
////////////////////////////////////////////////////////////////////////////////////
int ReportWrenchEffort::ReadMessageBody(const Packet& packet)
{
    int expected = USHORT_SIZE;
    int read = 0;

    read += packet.Read(mPresenceVector);

    if((mPresenceVector & PresenceVector::PropulsiveLinearEffortX) > 0)
    {
        expected += USHORT_SIZE;
        read += ScaledInteger::Read(packet, mPropulsiveLinearEffortX, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveLinearEffortY) > 0)
    {
        expected += USHORT_SIZE;
        read += ScaledInteger::Read(packet, mPropulsiveLinearEffortY, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveLinearEffortZ) > 0)
    {
        expected += USHORT_SIZE;
        read += ScaledInteger::Read(packet, mPropulsiveLinearEffortZ, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveRotationalEffortX) > 0)
    {
        expected += USHORT_SIZE;
        read += ScaledInteger::Read(packet, mPropulsiveRotationalEffortX, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveRotationalEffortY) > 0)
    {
        expected += USHORT_SIZE;
        read += ScaledInteger::Read(packet, mPropulsiveRotationalEffortY, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::PropulsiveRotationalEffortZ) > 0)
    {
        expected += USHORT_SIZE;
        read += ScaledInteger::Read(packet, mPropulsiveRotationalEffortZ, 100.0, -100.0, ScaledInteger::UShort);
    }
    if((mPresenceVector & PresenceVector::ResistiveLinearEffortX) > 0)
    {
        expected += BYTE_SIZE;
        read += ScaledInteger::Read(packet, mResistiveLinearEffortX, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveLinearEffortY) > 0)
    {
        expected += BYTE_SIZE;
        read += ScaledInteger::Read(packet, mResistiveLinearEffortY, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveLinearEffortZ) > 0)
    {
        expected += BYTE_SIZE;
        read += ScaledInteger::Read(packet, mResistiveLinearEffortZ, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveRotationalEffortX) > 0)
    {
        expected += BYTE_SIZE;
        read += ScaledInteger::Read(packet, mResistiveRotationalEffortX, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveRotationalEffortY) > 0)
    {
        expected += BYTE_SIZE;
        read += ScaledInteger::Read(packet, mResistiveRotationalEffortY, 100.0, 0.0, ScaledInteger::Byte);
    }
    if((mPresenceVector & PresenceVector::ResistiveRotationalEffortZ) > 0)
    {
        expected += BYTE_SIZE;
        read += ScaledInteger::Read(packet, mResistiveRotationalEffortZ, 100.0, 0.0, ScaledInteger::Byte);
    }    

    return expected == read ? read : -1;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Clears message payload data.
///
////////////////////////////////////////////////////////////////////////////////////
void ReportWrenchEffort::ClearMessageBody()
{
    mPresenceVector = 0;
    mPropulsiveLinearEffortX = 0;             
    mPropulsiveLinearEffortY = 0;             
    mPropulsiveLinearEffortZ = 0;             
    mPropulsiveRotationalEffortX = 0;             
    mPropulsiveRotationalEffortY = 0;             
    mPropulsiveRotationalEffortZ = 0;             
    mResistiveLinearEffortX = 0;             
    mResistiveLinearEffortY = 0;             
    mResistiveLinearEffortZ = 0;             
    mResistiveRotationalEffortX = 0;             
    mResistiveRotationalEffortY = 0;             
    mResistiveRotationalEffortZ = 0;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Runs a test case to validate the message class.
///
///   \return 1 on success, otherwise 0.
///
////////////////////////////////////////////////////////////////////////////////////
int ReportWrenchEffort::RunTestCase() const
{
    int result = 0;

    Packet packet;

    ReportWrenchEffort wrench;

    wrench.SetPropulsiveLinearEffortX(60);
    wrench.SetPropulsiveRotationalEffortZ(-30);

    if(wrench.WriteMessageBody(packet))
    {
        wrench.ClearMessage();
        if(wrench.ReadMessageBody(packet))
        {
            if(wrench.AreFieldsPresent(PresenceVector::PropulsiveLinearEffortX | PresenceVector::PropulsiveRotationalEffortZ))
            {
                result = 1;
            }
        }
    }

    return result;
}


////////////////////////////////////////////////////////////////////////////////////
///
///   \brief Sets equal to.
///
////////////////////////////////////////////////////////////////////////////////////
ReportWrenchEffort& ReportWrenchEffort::operator=(const ReportWrenchEffort& message)
{
    if(this != &message)
    {
        CopyHeaderData(&message);
        mPresenceVector = message.mPresenceVector;
        mPropulsiveLinearEffortX = message.mPropulsiveLinearEffortX;             
        mPropulsiveLinearEffortY = message.mPropulsiveLinearEffortY;             
        mPropulsiveLinearEffortZ = message.mPropulsiveLinearEffortZ;             
        mPropulsiveRotationalEffortX = message.mPropulsiveRotationalEffortX;             
        mPropulsiveRotationalEffortY = message.mPropulsiveRotationalEffortY;             
        mPropulsiveRotationalEffortZ = message.mPropulsiveRotationalEffortZ;             
        mResistiveLinearEffortX = message.mResistiveLinearEffortX;             
        mResistiveLinearEffortY = message.mResistiveLinearEffortY;             
        mResistiveLinearEffortZ = message.mResistiveLinearEffortZ;             
        mResistiveRotationalEffortX = message.mResistiveRotationalEffortX;             
        mResistiveRotationalEffortY = message.mResistiveRotationalEffortY;             
        mResistiveRotationalEffortZ = message.mResistiveRotationalEffortZ; 
    }
    return *this;
}


/*  End of File */
