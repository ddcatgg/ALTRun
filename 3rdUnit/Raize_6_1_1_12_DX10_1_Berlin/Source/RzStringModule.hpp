// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'RzStringModule.pas' rev: 30.00 (Windows)

#ifndef RzstringmoduleHPP
#define RzstringmoduleHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <DesignConst.hpp>
#include <ToolsAPI.hpp>
#include <IStreams.hpp>
#include <StFilSys.hpp>
#include <System.TypInfo.hpp>

//-- user supplied -----------------------------------------------------------

namespace Rzstringmodule
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TRzStringsModuleCreator;
class DELPHICLASS TRzOTAFile;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TRzStringsModuleCreator : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FFileName;
	System::Classes::TStringStream* FStream;
	System::TDateTime FAge;
	
public:
	__fastcall TRzStringsModuleCreator(const System::UnicodeString FileName, System::Classes::TStringStream* Stream, System::TDateTime Age);
	__fastcall virtual ~TRzStringsModuleCreator(void);
	System::UnicodeString __fastcall GetCreatorType(void);
	bool __fastcall GetExisting(void);
	System::UnicodeString __fastcall GetFileSystem(void);
	Toolsapi::_di_IOTAModule __fastcall GetOwner(void);
	bool __fastcall GetUnnamed(void);
	System::UnicodeString __fastcall GetAncestorName(void);
	System::UnicodeString __fastcall GetImplFileName(void);
	System::UnicodeString __fastcall GetIntfFileName(void);
	System::UnicodeString __fastcall GetFormName(void);
	bool __fastcall GetMainForm(void);
	bool __fastcall GetShowForm(void);
	bool __fastcall GetShowSource(void);
	Toolsapi::_di_IOTAFile __fastcall NewFormFile(const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	Toolsapi::_di_IOTAFile __fastcall NewImplSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	Toolsapi::_di_IOTAFile __fastcall NewIntfSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	void __fastcall FormCreated(const Toolsapi::_di_IOTAFormEditor FormEditor);
private:
	void *__IOTAModuleCreator;	// Toolsapi::IOTAModuleCreator 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6EDB9B9A-F57A-11D1-AB23-00C04FB16FB3}
	operator Toolsapi::_di_IOTAModuleCreator()
	{
		Toolsapi::_di_IOTAModuleCreator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAModuleCreator*(void) { return (Toolsapi::IOTAModuleCreator*)&__IOTAModuleCreator; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6EDB9B9E-F57A-11D1-AB23-00C04FB16FB3}
	operator Toolsapi::_di_IOTACreator()
	{
		Toolsapi::_di_IOTACreator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTACreator*(void) { return (Toolsapi::IOTACreator*)&__IOTAModuleCreator; }
	#endif
	
};


class PASCALIMPLEMENTATION TRzOTAFile : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::UnicodeString FSource;
	System::TDateTime FAge;
	
public:
	__fastcall TRzOTAFile(const System::UnicodeString ASource, System::TDateTime AAge);
	System::UnicodeString __fastcall GetSource(void);
	System::TDateTime __fastcall GetAge(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzOTAFile(void) { }
	
private:
	void *__IOTAFile;	// Toolsapi::IOTAFile 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6E2AD9B0-F7F0-11D1-AB26-00C04FB16FB3}
	operator Toolsapi::_di_IOTAFile()
	{
		Toolsapi::_di_IOTAFile intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAFile*(void) { return (Toolsapi::IOTAFile*)&__IOTAFile; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Rzstringmodule */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_RZSTRINGMODULE)
using namespace Rzstringmodule;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// RzstringmoduleHPP
