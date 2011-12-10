/**
 * Autogenerated by Thrift Compiler (0.7.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef ozw_TYPES_H
#define ozw_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>


#include "Manager.h"
#include "ValueID.h"
#include "Options.h"

namespace OpenZWave {

struct RemoteValueGenre {
  enum type {
    ValueGenre_Basic = 0,
    ValueGenre_User = 1,
    ValueGenre_Config = 2,
    ValueGenre_System = 3,
    ValueGenre_Count = 4
  };
};

extern const std::map<int, const char*> _RemoteValueGenre_VALUES_TO_NAMES;

struct RemoteValueType {
  enum type {
    ValueType_Bool = 0,
    ValueType_Byte = 1,
    ValueType_Decimal = 2,
    ValueType_Int = 3,
    ValueType_List = 4,
    ValueType_Schedule = 5,
    ValueType_Short = 6,
    ValueType_String = 7,
    ValueType_Button = 8,
    ValueType_Max = 8
  };
};

extern const std::map<int, const char*> _RemoteValueType_VALUES_TO_NAMES;

typedef int64_t RemoteValueID;

typedef struct _GetSwitchPointReturnStruct__isset {
  _GetSwitchPointReturnStruct__isset() : o_hours(false), o_minutes(false), o_setback(false) {}
  bool o_hours;
  bool o_minutes;
  bool o_setback;
} _GetSwitchPointReturnStruct__isset;

class GetSwitchPointReturnStruct {
 public:

  static const char* ascii_fingerprint; // = "0A77C25C826CC107FD266A55D263629B";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0x77,0xC2,0x5C,0x82,0x6C,0xC1,0x07,0xFD,0x26,0x6A,0x55,0xD2,0x63,0x62,0x9B};

  GetSwitchPointReturnStruct() : o_hours(0), o_minutes(0), o_setback(0) {
  }

  virtual ~GetSwitchPointReturnStruct() throw() {}

  int8_t o_hours;
  int8_t o_minutes;
  int8_t o_setback;

  _GetSwitchPointReturnStruct__isset __isset;

  void __set_o_hours(const int8_t val) {
    o_hours = val;
  }

  void __set_o_minutes(const int8_t val) {
    o_minutes = val;
  }

  void __set_o_setback(const int8_t val) {
    o_setback = val;
  }

  bool operator == (const GetSwitchPointReturnStruct & rhs) const
  {
    if (!(o_hours == rhs.o_hours))
      return false;
    if (!(o_minutes == rhs.o_minutes))
      return false;
    if (!(o_setback == rhs.o_setback))
      return false;
    return true;
  }
  bool operator != (const GetSwitchPointReturnStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetSwitchPointReturnStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_Bool__isset {
  _Bool_Bool__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _Bool_Bool__isset;

class Bool_Bool {
 public:

  static const char* ascii_fingerprint; // = "403F0C4586060E367DA428DD09C59C9C";
  static const uint8_t binary_fingerprint[16]; // = {0x40,0x3F,0x0C,0x45,0x86,0x06,0x0E,0x36,0x7D,0xA4,0x28,0xDD,0x09,0xC5,0x9C,0x9C};

  Bool_Bool() : retval(0), o_value(0) {
  }

  virtual ~Bool_Bool() throw() {}

  bool retval;
  bool o_value;

  _Bool_Bool__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set_o_value(const bool val) {
    o_value = val;
  }

  bool operator == (const Bool_Bool & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const Bool_Bool &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_Bool & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_UInt8__isset {
  _Bool_UInt8__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _Bool_UInt8__isset;

class Bool_UInt8 {
 public:

  static const char* ascii_fingerprint; // = "A65BD4DCABE29F39F7EDB1B158641972";
  static const uint8_t binary_fingerprint[16]; // = {0xA6,0x5B,0xD4,0xDC,0xAB,0xE2,0x9F,0x39,0xF7,0xED,0xB1,0xB1,0x58,0x64,0x19,0x72};

  Bool_UInt8() : retval(0), o_value(0) {
  }

  virtual ~Bool_UInt8() throw() {}

  bool retval;
  int8_t o_value;

  _Bool_UInt8__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set_o_value(const int8_t val) {
    o_value = val;
  }

  bool operator == (const Bool_UInt8 & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const Bool_UInt8 &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_UInt8 & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_Float__isset {
  _Bool_Float__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _Bool_Float__isset;

class Bool_Float {
 public:

  static const char* ascii_fingerprint; // = "B799A8FF13E94F63DAEEFC9FBBD641CF";
  static const uint8_t binary_fingerprint[16]; // = {0xB7,0x99,0xA8,0xFF,0x13,0xE9,0x4F,0x63,0xDA,0xEE,0xFC,0x9F,0xBB,0xD6,0x41,0xCF};

  Bool_Float() : retval(0), o_value(0) {
  }

  virtual ~Bool_Float() throw() {}

  bool retval;
  double o_value;

  _Bool_Float__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set_o_value(const double val) {
    o_value = val;
  }

  bool operator == (const Bool_Float & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const Bool_Float &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_Float & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_Int__isset {
  _Bool_Int__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _Bool_Int__isset;

class Bool_Int {
 public:

  static const char* ascii_fingerprint; // = "88440F45A63E63607868B983E4E50558";
  static const uint8_t binary_fingerprint[16]; // = {0x88,0x44,0x0F,0x45,0xA6,0x3E,0x63,0x60,0x78,0x68,0xB9,0x83,0xE4,0xE5,0x05,0x58};

  Bool_Int() : retval(0), o_value(0) {
  }

  virtual ~Bool_Int() throw() {}

  bool retval;
  int32_t o_value;

  _Bool_Int__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set_o_value(const int32_t val) {
    o_value = val;
  }

  bool operator == (const Bool_Int & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const Bool_Int &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_Int & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_Int16__isset {
  _Bool_Int16__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _Bool_Int16__isset;

class Bool_Int16 {
 public:

  static const char* ascii_fingerprint; // = "4569DC9D7756C822FCF8EB7EFD6EF661";
  static const uint8_t binary_fingerprint[16]; // = {0x45,0x69,0xDC,0x9D,0x77,0x56,0xC8,0x22,0xFC,0xF8,0xEB,0x7E,0xFD,0x6E,0xF6,0x61};

  Bool_Int16() : retval(0), o_value(0) {
  }

  virtual ~Bool_Int16() throw() {}

  bool retval;
  int16_t o_value;

  _Bool_Int16__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set_o_value(const int16_t val) {
    o_value = val;
  }

  bool operator == (const Bool_Int16 & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const Bool_Int16 &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_Int16 & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_String__isset {
  _Bool_String__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _Bool_String__isset;

class Bool_String {
 public:

  static const char* ascii_fingerprint; // = "1767FFB0CB3D9275BC64B198AB3B8A8B";
  static const uint8_t binary_fingerprint[16]; // = {0x17,0x67,0xFF,0xB0,0xCB,0x3D,0x92,0x75,0xBC,0x64,0xB1,0x98,0xAB,0x3B,0x8A,0x8B};

  Bool_String() : retval(0), o_value("") {
  }

  virtual ~Bool_String() throw() {}

  bool retval;
  std::string o_value;

  _Bool_String__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set_o_value(const std::string& val) {
    o_value = val;
  }

  bool operator == (const Bool_String & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const Bool_String &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_String & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_ListString__isset {
  _Bool_ListString__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _Bool_ListString__isset;

class Bool_ListString {
 public:

  static const char* ascii_fingerprint; // = "D41147785C488E7FFDCF1B17BF20AC0F";
  static const uint8_t binary_fingerprint[16]; // = {0xD4,0x11,0x47,0x78,0x5C,0x48,0x8E,0x7F,0xFD,0xCF,0x1B,0x17,0xBF,0x20,0xAC,0x0F};

  Bool_ListString() : retval(0) {
  }

  virtual ~Bool_ListString() throw() {}

  bool retval;
  std::vector<std::string>  o_value;

  _Bool_ListString__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set_o_value(const std::vector<std::string> & val) {
    o_value = val;
  }

  bool operator == (const Bool_ListString & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const Bool_ListString &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_ListString & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UInt32_ListByte__isset {
  _UInt32_ListByte__isset() : retval(false), _nodeNeighbors(false) {}
  bool retval;
  bool _nodeNeighbors;
} _UInt32_ListByte__isset;

class UInt32_ListByte {
 public:

  static const char* ascii_fingerprint; // = "C69B8D458340D01227B2A605EFE33F77";
  static const uint8_t binary_fingerprint[16]; // = {0xC6,0x9B,0x8D,0x45,0x83,0x40,0xD0,0x12,0x27,0xB2,0xA6,0x05,0xEF,0xE3,0x3F,0x77};

  UInt32_ListByte() : retval(0) {
  }

  virtual ~UInt32_ListByte() throw() {}

  int32_t retval;
  std::vector<int8_t>  _nodeNeighbors;

  _UInt32_ListByte__isset __isset;

  void __set_retval(const int32_t val) {
    retval = val;
  }

  void __set__nodeNeighbors(const std::vector<int8_t> & val) {
    _nodeNeighbors = val;
  }

  bool operator == (const UInt32_ListByte & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(_nodeNeighbors == rhs._nodeNeighbors))
      return false;
    return true;
  }
  bool operator != (const UInt32_ListByte &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UInt32_ListByte & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Bool_GetNodeClassInformation__isset {
  _Bool_GetNodeClassInformation__isset() : retval(false), _className(false), _classVersion(false) {}
  bool retval;
  bool _className;
  bool _classVersion;
} _Bool_GetNodeClassInformation__isset;

class Bool_GetNodeClassInformation {
 public:

  static const char* ascii_fingerprint; // = "E35E3BAE8348A954A88C096C7A63DF4B";
  static const uint8_t binary_fingerprint[16]; // = {0xE3,0x5E,0x3B,0xAE,0x83,0x48,0xA9,0x54,0xA8,0x8C,0x09,0x6C,0x7A,0x63,0xDF,0x4B};

  Bool_GetNodeClassInformation() : retval(0), _className(""), _classVersion(0) {
  }

  virtual ~Bool_GetNodeClassInformation() throw() {}

  bool retval;
  std::string _className;
  int8_t _classVersion;

  _Bool_GetNodeClassInformation__isset __isset;

  void __set_retval(const bool val) {
    retval = val;
  }

  void __set__className(const std::string& val) {
    _className = val;
  }

  void __set__classVersion(const int8_t val) {
    _classVersion = val;
  }

  bool operator == (const Bool_GetNodeClassInformation & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(_className == rhs._className))
      return false;
    if (!(_classVersion == rhs._classVersion))
      return false;
    return true;
  }
  bool operator != (const Bool_GetNodeClassInformation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Bool_GetNodeClassInformation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _GetAssociationsReturnStruct__isset {
  _GetAssociationsReturnStruct__isset() : retval(false), o_associations(false) {}
  bool retval;
  bool o_associations;
} _GetAssociationsReturnStruct__isset;

class GetAssociationsReturnStruct {
 public:

  static const char* ascii_fingerprint; // = "C69B8D458340D01227B2A605EFE33F77";
  static const uint8_t binary_fingerprint[16]; // = {0xC6,0x9B,0x8D,0x45,0x83,0x40,0xD0,0x12,0x27,0xB2,0xA6,0x05,0xEF,0xE3,0x3F,0x77};

  GetAssociationsReturnStruct() : retval(0) {
  }

  virtual ~GetAssociationsReturnStruct() throw() {}

  int32_t retval;
  std::vector<int8_t>  o_associations;

  _GetAssociationsReturnStruct__isset __isset;

  void __set_retval(const int32_t val) {
    retval = val;
  }

  void __set_o_associations(const std::vector<int8_t> & val) {
    o_associations = val;
  }

  bool operator == (const GetAssociationsReturnStruct & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_associations == rhs.o_associations))
      return false;
    return true;
  }
  bool operator != (const GetAssociationsReturnStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetAssociationsReturnStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _GetAllScenesReturnStruct__isset {
  _GetAllScenesReturnStruct__isset() : retval(false), _sceneIds(false) {}
  bool retval;
  bool _sceneIds;
} _GetAllScenesReturnStruct__isset;

class GetAllScenesReturnStruct {
 public:

  static const char* ascii_fingerprint; // = "E9315D11ED9B3ADE4F14971EFD87F639";
  static const uint8_t binary_fingerprint[16]; // = {0xE9,0x31,0x5D,0x11,0xED,0x9B,0x3A,0xDE,0x4F,0x14,0x97,0x1E,0xFD,0x87,0xF6,0x39};

  GetAllScenesReturnStruct() : retval(0) {
  }

  virtual ~GetAllScenesReturnStruct() throw() {}

  int8_t retval;
  std::vector<int8_t>  _sceneIds;

  _GetAllScenesReturnStruct__isset __isset;

  void __set_retval(const int8_t val) {
    retval = val;
  }

  void __set__sceneIds(const std::vector<int8_t> & val) {
    _sceneIds = val;
  }

  bool operator == (const GetAllScenesReturnStruct & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(_sceneIds == rhs._sceneIds))
      return false;
    return true;
  }
  bool operator != (const GetAllScenesReturnStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GetAllScenesReturnStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _SceneGetValuesReturnStruct__isset {
  _SceneGetValuesReturnStruct__isset() : retval(false), o_value(false) {}
  bool retval;
  bool o_value;
} _SceneGetValuesReturnStruct__isset;

class SceneGetValuesReturnStruct {
 public:

  static const char* ascii_fingerprint; // = "10B0DAF3A336BE67A0D106228B97776E";
  static const uint8_t binary_fingerprint[16]; // = {0x10,0xB0,0xDA,0xF3,0xA3,0x36,0xBE,0x67,0xA0,0xD1,0x06,0x22,0x8B,0x97,0x77,0x6E};

  SceneGetValuesReturnStruct() : retval(0) {
  }

  virtual ~SceneGetValuesReturnStruct() throw() {}

  int32_t retval;
  std::vector<RemoteValueID>  o_value;

  _SceneGetValuesReturnStruct__isset __isset;

  void __set_retval(const int32_t val) {
    retval = val;
  }

  void __set_o_value(const std::vector<RemoteValueID> & val) {
    o_value = val;
  }

  bool operator == (const SceneGetValuesReturnStruct & rhs) const
  {
    if (!(retval == rhs.retval))
      return false;
    if (!(o_value == rhs.o_value))
      return false;
    return true;
  }
  bool operator != (const SceneGetValuesReturnStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SceneGetValuesReturnStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

} // namespace

#endif
