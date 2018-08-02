// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'RzDesignEditors.pas' rev: 30.00 (Windows)

#ifndef RzdesigneditorsHPP
#define RzdesigneditorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ActnList.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <VCLEditors.hpp>
#include <VCLSprigs.hpp>
#include <DesignMenus.hpp>
#include <TreeIntf.hpp>
#include <RzCommon.hpp>
#include <RzEdit.hpp>
#include <RzStatus.hpp>
#include <RzLabel.hpp>
#include <RzLstBox.hpp>
#include <RzLine.hpp>
#include <RzTabs.hpp>
#include <RzRadChk.hpp>
#include <RzCmboBx.hpp>
#include <RzPanel.hpp>
#include <RzSplit.hpp>
#include <RzListVw.hpp>
#include <RzTreeVw.hpp>
#include <RzDlgBtn.hpp>
#include <RzBckgnd.hpp>
#include <RzBorder.hpp>
#include <RzTrkBar.hpp>
#include <RzPrgres.hpp>
#include <RzBtnEdt.hpp>
#include <RzSpnEdt.hpp>
#include <RzTray.hpp>
#include <RzForms.hpp>
#include <RzPopups.hpp>
#include <RzAnimtr.hpp>
#include <RzBHints.hpp>
#include <RzGrids.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Rzdesigneditors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TRzComponentEditor;
class DELPHICLASS TRzDefaultEditor;
class DELPHICLASS TRzFrameControllerEditor;
class DELPHICLASS TRzStatusBarEditor;
class DELPHICLASS TRzGroupBoxEditor;
class DELPHICLASS TRzPageControlEditor;
class DELPHICLASS TRzPageControlSprig;
class DELPHICLASS TRzTabSheetSprig;
class DELPHICLASS TRzTabControlEditor;
class DELPHICLASS TRzSizePanelEditor;
class DELPHICLASS TRzCheckBoxEditor;
class DELPHICLASS TRzRadioButtonEditor;
class DELPHICLASS TRzMemoEditor;
class DELPHICLASS TRzRichEditEditor;
class DELPHICLASS TRzListBoxEditor;
class DELPHICLASS TRzRankListBoxEditor;
class DELPHICLASS TRzMRUComboBoxEditor;
class DELPHICLASS TRzImageComboBoxEditor;
class DELPHICLASS TRzListViewEditor;
class DELPHICLASS TRzTreeViewEditor;
class DELPHICLASS TRzCheckTreeEditor;
class DELPHICLASS TRzBackgroundEditor;
class DELPHICLASS TRzTrackBarEditor;
class DELPHICLASS TRzProgressBarEditor;
class DELPHICLASS TRzFontListEditor;
class DELPHICLASS TRzEditControlEditor;
class DELPHICLASS TRzButtonEditEditor;
class DELPHICLASS TRzNumericEditEditor;
class DELPHICLASS TRzSpinEditEditor;
class DELPHICLASS TRzSpinButtonsEditor;
class DELPHICLASS TRzSpinnerEditor;
class DELPHICLASS TRzLookupDialogEditor;
class DELPHICLASS TRzDialogButtonsEditor;
class DELPHICLASS TRzFormEditor;
class DELPHICLASS TRzFrameEditor;
class DELPHICLASS TRzDateTimeEditEditor;
class DELPHICLASS TRzCalendarEditor;
class DELPHICLASS TRzCalculatorEditor;
class DELPHICLASS TRzTimePickerEditor;
class DELPHICLASS TRzColorPickerEditor;
class DELPHICLASS TRzColorEditEditor;
class DELPHICLASS TRzLEDDisplayEditor;
class DELPHICLASS TRzStatusPaneEditor;
class DELPHICLASS TRzGlyphStatusEditor;
class DELPHICLASS TRzMarqueeStatusEditor;
class DELPHICLASS TRzClockStatusEditor;
class DELPHICLASS TRzKeyStatusEditor;
class DELPHICLASS TRzVersionInfoStatusEditor;
class DELPHICLASS TRzResourceStatusEditor;
class DELPHICLASS TRzProgressStatusEditor;
class DELPHICLASS TRzLineEditor;
class DELPHICLASS TRzCustomColorsEditor;
class DELPHICLASS TRzShapeButtonEditor;
class DELPHICLASS TRzPropertyItemPropNameProperty;
class DELPHICLASS TRzPropertyStoreEditor;
class DELPHICLASS TRzFormStateEditor;
class DELPHICLASS TRzFormShapeEditor;
class DELPHICLASS TRzBorderEditor;
class DELPHICLASS TRzTrayIconEditor;
class DELPHICLASS TRzAnimatorEditor;
class DELPHICLASS TRzSeparatorEditor;
class DELPHICLASS TRzSpacerEditor;
class DELPHICLASS TRzBalloonHintsEditor;
class DELPHICLASS TRzStringGridEditor;
class DELPHICLASS TRzFlowPanelEditor;
class DELPHICLASS TRzGridPanelEditor;
class DELPHICLASS TRzFrameStyleProperty;
class DELPHICLASS TRzAlignDropDown;
class DELPHICLASS TRzAlignProperty;
class DELPHICLASS TRzActivePageProperty;
class DELPHICLASS TRzDateTimeFormatProperty;
class DELPHICLASS TRzClockStatusFormatProperty;
class DELPHICLASS TRzDTPFormatProperty;
class DELPHICLASS TRzSpinValueProperty;
class DELPHICLASS TRzSpinnerGlyphProperty;
class DELPHICLASS TRzFileNameProperty;
class DELPHICLASS TRzActionProperty;
class DELPHICLASS TRzCustomColorsProperty;
class DELPHICLASS TRzCustomButtonGuidelines;
class DELPHICLASS TRzButtonGuidelines;
class DELPHICLASS TRzToolButtonGuidelines;
class DELPHICLASS TRzCaptionGuidelines;
class DELPHICLASS TRzLabelGuidelines;
class DELPHICLASS TRzPanelGuidelines;
class DELPHICLASS TRzPageControlGuidelines;
class DELPHICLASS TRzTabControlGuidelines;
class DELPHICLASS TRzPaletteSep;
class DELPHICLASS TRzPaletteSep_Panels;
class DELPHICLASS TRzPaletteSep_Edits;
class DELPHICLASS TRzPaletteSep_Lists;
class DELPHICLASS TRzPaletteSep_Buttons;
class DELPHICLASS TRzPaletteSep_Display;
class DELPHICLASS TRzPaletteSep_Shell;
class DELPHICLASS TRzPaletteSep_Widgets;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzComponentEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
private:
	System::UnicodeString FPropName;
	bool FContinue;
	Designintf::_di_IProperty FPropEditor;
	void __fastcall EnumPropertyEditors(const Designintf::_di_IProperty PropertyEditor);
	void __fastcall TestPropertyEditor(const Designintf::_di_IProperty PropertyEditor, bool &Continue);
	void __fastcall AlignMenuHandler(System::TObject* Sender);
	void __fastcall ImageListMenuHandler(System::TObject* Sender);
	void __fastcall RegIniFileMenuHandler(System::TObject* Sender);
	
protected:
	void __fastcall DesignerModified(void);
	void __fastcall EditPropertyByName(const System::UnicodeString APropName);
	virtual int __fastcall AlignMenuIndex(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzComponentEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzComponentEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzDefaultEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
private:
	System::UnicodeString FPropName;
	bool FContinue;
	Designintf::_di_IProperty FPropEditor;
	void __fastcall EnumPropertyEditors(const Designintf::_di_IProperty PropertyEditor);
	void __fastcall TestPropertyEditor(const Designintf::_di_IProperty PropertyEditor, bool &Continue);
	void __fastcall AlignMenuHandler(System::TObject* Sender);
	void __fastcall ImageListMenuHandler(System::TObject* Sender);
	void __fastcall RegIniFileMenuHandler(System::TObject* Sender);
	
protected:
	void __fastcall DesignerModified(void);
	void __fastcall EditPropertyByName(const System::UnicodeString APropName);
	virtual int __fastcall AlignMenuIndex(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzDefaultEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzDefaultEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFrameControllerEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzcommon::TRzFrameController* __fastcall FrameController(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzFrameControllerEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzFrameControllerEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzStatusBarEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzpanel::TRzStatusBar* __fastcall StatusBar(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall AddPaneMenuHandler(System::TObject* Sender);
	void __fastcall VisualStyleMenuHandler(System::TObject* Sender);
	void __fastcall GradientColorStyleMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall Edit(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzStatusBarEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzStatusBarEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzGroupBoxEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzpanel::TRzGroupBox* __fastcall GroupBox(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall GroupStyleMenuHandler(System::TObject* Sender);
	void __fastcall VisualStyleMenuHandler(System::TObject* Sender);
	void __fastcall GradientColorStyleMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzGroupBoxEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzGroupBoxEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzPageControlEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rztabs::TRzPageControl* __fastcall PageControl(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall PageMenuHandler(System::TObject* Sender);
	void __fastcall StyleMenuHandler(System::TObject* Sender);
	void __fastcall OrientationMenuHandler(System::TObject* Sender);
	HIDESBASE void __fastcall ImageListMenuHandler(System::TObject* Sender);
	HIDESBASE void __fastcall AlignMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzPageControlEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzPageControlEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzPageControlSprig : public Vclsprigs::TWinControlSprig
{
	typedef Vclsprigs::TWinControlSprig inherited;
	
public:
	__fastcall virtual TRzPageControlSprig(System::Classes::TPersistent* AItem)/* overload */;
	virtual bool __fastcall SortByIndex(void);
public:
	/* TComponentSprig.Create */ inline __fastcall TRzPageControlSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : Vclsprigs::TWinControlSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TRzPageControlSprig(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzTabSheetSprig : public Vclsprigs::TWinControlSprig
{
	typedef Vclsprigs::TWinControlSprig inherited;
	
public:
	__fastcall virtual TRzTabSheetSprig(System::Classes::TPersistent* AItem)/* overload */;
	virtual System::UnicodeString __fastcall Caption(void);
	virtual int __fastcall ItemIndex(void);
	virtual bool __fastcall Hidden(void);
public:
	/* TComponentSprig.Create */ inline __fastcall TRzTabSheetSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : Vclsprigs::TWinControlSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TRzTabSheetSprig(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzTabControlEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rztabs::TRzTabControl* __fastcall TabControl(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall TabMenuHandler(System::TObject* Sender);
	void __fastcall StyleMenuHandler(System::TObject* Sender);
	void __fastcall OrientationMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzTabControlEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzTabControlEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSizePanelEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzsplit::TRzSizePanel* __fastcall SizePanel(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzSizePanelEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzSizePanelEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCheckBoxEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzradchk::TRzCheckBox* __fastcall CheckBox(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzCheckBoxEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzCheckBoxEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzRadioButtonEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzradchk::TRzRadioButton* __fastcall RadioButton(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzRadioButtonEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzRadioButtonEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzMemoEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	virtual bool __fastcall GetWordWrap(void);
	virtual void __fastcall SetWordWrap(bool Value);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, nodefault};
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzMemoEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzMemoEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzRichEditEditor : public TRzMemoEditor
{
	typedef TRzMemoEditor inherited;
	
protected:
	virtual bool __fastcall GetWordWrap(void);
	virtual void __fastcall SetWordWrap(bool Value);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzRichEditEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzMemoEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzRichEditEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzListBoxEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzlstbox::TRzListBox* __fastcall ListBox(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzListBoxEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzListBoxEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzRankListBoxEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzlstbox::TRzRankListBox* __fastcall ListBox(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzRankListBoxEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzRankListBoxEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzMRUComboBoxEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzMRUComboBoxEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzMRUComboBoxEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzImageComboBoxEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzImageComboBoxEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzImageComboBoxEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzListViewEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzlistvw::TRzListView* __fastcall ListView(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ViewStyleMenuHandler(System::TObject* Sender);
	void __fastcall SmallImagesMenuHandler(System::TObject* Sender);
	void __fastcall LargeImagesMenuHandler(System::TObject* Sender);
	void __fastcall StateImagesMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzListViewEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzListViewEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzTreeViewEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rztreevw::TRzTreeView* __fastcall TreeView(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	void __fastcall ImagesMenuHandler(System::TObject* Sender);
	void __fastcall StateImagesMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzTreeViewEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzTreeViewEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCheckTreeEditor : public TRzTreeViewEditor
{
	typedef TRzTreeViewEditor inherited;
	
protected:
	Rztreevw::TRzCheckTree* __fastcall CheckTree(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzCheckTreeEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzTreeViewEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzCheckTreeEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzBackgroundEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzbckgnd::TRzBackground* __fastcall Background(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall GradientDirectionMenuHandler(System::TObject* Sender);
	void __fastcall ImageStyleMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzBackgroundEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzBackgroundEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzTrackBarEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rztrkbar::TRzTrackBar* __fastcall TrackBar(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ThumbStyleMenuHandler(System::TObject* Sender);
	void __fastcall TickStepMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzTrackBarEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzTrackBarEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzProgressBarEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzprgres::TRzProgressBar* __fastcall ProgressBar(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzProgressBarEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzProgressBarEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFontListEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ShowStyleMenuHandler(System::TObject* Sender);
	void __fastcall FontTypeMenuHandler(System::TObject* Sender);
	void __fastcall FontDeviceMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzFontListEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzFontListEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzEditControlEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzedit::TRzCustomEdit* __fastcall EditControl(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzEditControlEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzEditControlEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzButtonEditEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzbtnedt::TRzButtonEdit* __fastcall ButtonEdit(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ButtonKindMenuHandler(System::TObject* Sender);
	void __fastcall AltBtnKindMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzButtonEditEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzButtonEditEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzNumericEditEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzedit::TRzNumericEdit* __fastcall NumericEdit(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzNumericEditEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzNumericEditEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSpinEditEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzspnedt::TRzSpinEdit* __fastcall SpinEdit(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall DirectionMenuHandler(System::TObject* Sender);
	void __fastcall OrientationMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzSpinEditEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzSpinEditEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSpinButtonsEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzspnedt::TRzSpinButtons* __fastcall SpinButtons(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall DirectionMenuHandler(System::TObject* Sender);
	void __fastcall OrientationMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzSpinButtonsEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzSpinButtonsEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSpinnerEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzspnedt::TRzSpinner* __fastcall Spinner(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzSpinnerEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzSpinnerEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzLookupDialogEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzLookupDialogEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzLookupDialogEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzDialogButtonsEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzdlgbtn::TRzDialogButtons* __fastcall DialogButtons(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzDialogButtonsEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzDialogButtonsEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFormEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Vcl::Forms::TForm* __fastcall Form(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall QuickDesignFormMenuHandler(System::TObject* Sender);
	void __fastcall AddControlMenuHandler(System::TObject* Sender);
	void __fastcall AddComponentMenuHandler(System::TObject* Sender);
	void __fastcall UIStyleMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzFormEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzFormEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFrameEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Vcl::Forms::TFrame* __fastcall Frame(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall StyleMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzFrameEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzFrameEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzDateTimeEditEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzedit::TRzDateTimeEdit* __fastcall DateTimeEdit(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ElementsMenuHandler(System::TObject* Sender);
	void __fastcall FirstDayOfWeekMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzDateTimeEditEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzDateTimeEditEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCalendarEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzpopups::TRzCalendar* __fastcall Calendar(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ElementsMenuHandler(System::TObject* Sender);
	void __fastcall FirstDayOfWeekMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzCalendarEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzCalendarEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCalculatorEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzpopups::TRzCalculator* __fastcall Calculator(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzCalculatorEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzCalculatorEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzTimePickerEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzpopups::TRzTimePicker* __fastcall TimePicker(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzTimePickerEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzTimePickerEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzColorPickerEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzborder::TRzColorPicker* __fastcall ColorPicker(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall CustomColorsMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzColorPickerEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzColorPickerEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzColorEditEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzedit::TRzColorEdit* __fastcall ColorEdit(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall CustomColorsMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzColorEditEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzColorEditEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzLEDDisplayEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzborder::TRzLEDDisplay* __fastcall LEDDisplay(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzLEDDisplayEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzLEDDisplayEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzStatusPaneEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall AlignmentMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzStatusPaneEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzStatusPaneEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzGlyphStatusEditor : public TRzStatusPaneEditor
{
	typedef TRzStatusPaneEditor inherited;
	
protected:
	Rzstatus::TRzGlyphStatus* __fastcall GlyphStatus(void);
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall GlyphAlignmentMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzGlyphStatusEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzStatusPaneEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzGlyphStatusEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzMarqueeStatusEditor : public TRzStatusPaneEditor
{
	typedef TRzStatusPaneEditor inherited;
	
protected:
	Rzstatus::TRzMarqueeStatus* __fastcall MarqueeStatus(void);
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzMarqueeStatusEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzStatusPaneEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzMarqueeStatusEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzClockStatusEditor : public TRzStatusPaneEditor
{
	typedef TRzStatusPaneEditor inherited;
	
protected:
	Rzstatus::TRzClockStatus* __fastcall ClockStatus(void);
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ClockMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzClockStatusEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzStatusPaneEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzClockStatusEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzKeyStatusEditor : public TRzStatusPaneEditor
{
	typedef TRzStatusPaneEditor inherited;
	
protected:
	Rzstatus::TRzKeyStatus* __fastcall KeyStatus(void);
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzKeyStatusEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzStatusPaneEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzKeyStatusEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzVersionInfoStatusEditor : public TRzStatusPaneEditor
{
	typedef TRzStatusPaneEditor inherited;
	
protected:
	Rzstatus::TRzVersionInfoStatus* __fastcall VersionInfoStatus(void);
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall VersionInfoMenuHandler(System::TObject* Sender);
	void __fastcall FieldMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzVersionInfoStatusEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzStatusPaneEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzVersionInfoStatusEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzResourceStatusEditor : public TRzStatusPaneEditor
{
	typedef TRzStatusPaneEditor inherited;
	
protected:
	Rzstatus::TRzResourceStatus* __fastcall ResourceStatus(void);
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzResourceStatusEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzStatusPaneEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzResourceStatusEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzProgressStatusEditor : public TRzStatusPaneEditor
{
	typedef TRzStatusPaneEditor inherited;
	
protected:
	Rzstatus::TRzProgressStatus* __fastcall ProgressStatus(void);
	virtual int __fastcall FlatStyleMenuIndex(void);
	virtual int __fastcall TraditionalStyleMenuIndex(void);
	virtual int __fastcall AutoSizeMenuIndex(void);
	virtual int __fastcall AlignmentMenuIndex(void);
	virtual int __fastcall BlinkingMenuIndex(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzProgressStatusEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzStatusPaneEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzProgressStatusEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzLineEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzline::TRzLine* __fastcall Line(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ShowArrowsMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzLineEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzLineEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCustomColorsEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzCustomColorsEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzCustomColorsEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzShapeButtonEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzShapeButtonEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzShapeButtonEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzPropertyItemPropNameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzPropertyItemPropNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzPropertyItemPropNameProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzPropertyStoreEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzcommon::TRzPropertyStore* __fastcall PropertyStore(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzPropertyStoreEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzPropertyStoreEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFormStateEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzforms::TRzFormState* __fastcall FormState(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzFormStateEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzFormStateEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFormShapeEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzforms::TRzFormShape* __fastcall FormShape(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzFormShapeEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzFormShapeEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzBorderEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzborder::TRzBorder* __fastcall Border(void);
	virtual int __fastcall AlignMenuIndex(void);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzBorderEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzBorderEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzTrayIconEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rztray::TRzTrayIcon* __fastcall TrayIcon(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	void __fastcall IconsMenuHandler(System::TObject* Sender);
	void __fastcall PopupMenuMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzTrayIconEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzTrayIconEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzAnimatorEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzanimtr::TRzAnimator* __fastcall Animator(void);
	virtual bool __fastcall GetCompRefData(int Index, System::Classes::TComponentClass &CompRefClass, System::UnicodeString &CompRefPropName, System::Classes::TNotifyEvent &CompRefMenuHandler);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	HIDESBASE void __fastcall ImageListMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzAnimatorEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzAnimatorEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSeparatorEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzbckgnd::TRzSeparator* __fastcall Separator(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall HighlightLocationMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzSeparatorEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzSeparatorEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSpacerEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzpanel::TRzSpacer* __fastcall Spacer(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzSpacerEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzSpacerEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzBalloonHintsEditor : public TRzComponentEditor
{
	typedef TRzComponentEditor inherited;
	
protected:
	Rzbhints::TRzBalloonHints* __fastcall BalloonHints(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall CornerMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzBalloonHintsEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzBalloonHintsEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzStringGridEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzgrids::TRzStringGrid* __fastcall Grid(void);
	virtual int __fastcall AlignMenuIndex(void);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzStringGridEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzStringGridEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFlowPanelEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzpanel::TRzFlowPanel* __fastcall FlowPanel(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall FlowStyleMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzFlowPanelEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzFlowPanelEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzGridPanelEditor : public TRzDefaultEditor
{
	typedef TRzDefaultEditor inherited;
	
protected:
	Rzpanel::TRzGridPanel* __fastcall GridPanel(void);
	virtual int __fastcall AlignMenuIndex(void);
	virtual void __fastcall PrepareMenuItem(int Index, Vcl::Menus::TMenuItem* const Item);
	void __fastcall ExpandStyleMenuHandler(System::TObject* Sender);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TRzGridPanelEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TRzDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzGridPanelEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFrameStyleProperty : public Designeditors::TEnumProperty
{
	typedef Designeditors::TEnumProperty inherited;
	
private:
	bool FDrawingPropertyValue;
	System::Types::TRect __fastcall PaintFrameStyleGlyph(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	
public:
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	System::Types::TRect __fastcall PropDrawNameRect(const System::Types::TRect &ARect);
	System::Types::TRect __fastcall PropDrawValueRect(const System::Types::TRect &ARect);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzFrameStyleProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TEnumProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzFrameStyleProperty(void) { }
	
private:
	void *__ICustomPropertyDrawing80;	// Vcleditors::ICustomPropertyDrawing80 
	void *__ICustomPropertyListDrawing;	// Vcleditors::ICustomPropertyListDrawing 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73100176-DF0B-4900-AA52-4E67D7D04895}
	operator Vcleditors::_di_ICustomPropertyDrawing80()
	{
		Vcleditors::_di_ICustomPropertyDrawing80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomPropertyDrawing80*(void) { return (Vcleditors::ICustomPropertyDrawing80*)&__ICustomPropertyDrawing80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}
	operator Vcleditors::_di_ICustomPropertyListDrawing()
	{
		Vcleditors::_di_ICustomPropertyListDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomPropertyListDrawing*(void) { return (Vcleditors::ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator Vcleditors::_di_ICustomPropertyDrawing()
	{
		Vcleditors::_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomPropertyDrawing*(void) { return (Vcleditors::ICustomPropertyDrawing*)&__ICustomPropertyDrawing80; }
	#endif
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TRzAlignChangedEvent)(System::TObject* Sender, Vcl::Controls::TAlign AlignValue);

class PASCALIMPLEMENTATION TRzAlignDropDown : public Rzpanel::TRzPanel
{
	typedef Rzpanel::TRzPanel inherited;
	
private:
	Vcl::Controls::TAlign FAlignValue;
	TRzAlignChangedEvent FOnAlignChanged;
	Rzpanel::TRzPanel* FFooter;
	Rzpanel::TRzPanel* FGrid;
	Rzpanel::TRzPanel* FTopPanel;
	Rzpanel::TRzPanel* FBottomPanel;
	Rzpanel::TRzPanel* FLeftPanel;
	Rzpanel::TRzPanel* FRightPanel;
	Rzpanel::TRzPanel* FClientPanel;
	Rzpanel::TRzPanel* FNonePanel;
	Rzpanel::TRzPanel* FCustomPanel;
	void __fastcall InitPanel(Rzpanel::TRzPanel* Panel, Vcl::Controls::TAlign Align);
	void __fastcall UnselectPanel(Rzpanel::TRzPanel* Panel);
	void __fastcall SelectPanel(Rzpanel::TRzPanel* Panel);
	void __fastcall MouseEnterHandler(System::TObject* Sender);
	void __fastcall MouseLeaveHandler(System::TObject* Sender);
	void __fastcall SetAlignValue(Vcl::Controls::TAlign Value);
	void __fastcall PanelClickHandler(System::TObject* Sender);
	
public:
	__fastcall virtual TRzAlignDropDown(System::Classes::TComponent* AOwner);
	__property Vcl::Controls::TAlign AlignValue = {read=FAlignValue, write=SetAlignValue, nodefault};
	__property TRzAlignChangedEvent OnAlignChanged = {read=FOnAlignChanged, write=FOnAlignChanged};
public:
	/* TRzCustomPanel.Destroy */ inline __fastcall virtual ~TRzAlignDropDown(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRzAlignDropDown(HWND ParentWindow) : Rzpanel::TRzPanel(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzAlignProperty : public Designeditors::TEnumProperty
{
	typedef Designeditors::TEnumProperty inherited;
	
private:
	TRzAlignDropDown* FDropDown;
	Designintf::_di_IPropertyHost FHost;
	bool FDrawingPropertyValue;
	System::Types::TRect __fastcall PaintAlignGlyph(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall KeyPressHandler(System::TObject* Sender, System::WideChar &Key);
	void __fastcall AlignChangedHandler(System::TObject* Sender, Vcl::Controls::TAlign AlignValue);
	
public:
	__fastcall virtual ~TRzAlignProperty(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	System::Types::TRect __fastcall PropDrawNameRect(const System::Types::TRect &ARect);
	System::Types::TRect __fastcall PropDrawValueRect(const System::Types::TRect &ARect);
	HIDESBASE void __fastcall Edit(const Designintf::_di_IPropertyHost Host, bool DblClick)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzAlignProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TEnumProperty(ADesigner, APropCount) { }
	
private:
	void *__IProperty80;	// Designintf::IProperty80 
	void *__ICustomPropertyDrawing80;	// Vcleditors::ICustomPropertyDrawing80 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A02577DB-D5E5-4374-A8AB-4B2F83177878}
	operator Designintf::_di_IProperty80()
	{
		Designintf::_di_IProperty80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IProperty80*(void) { return (Designintf::IProperty80*)&__IProperty80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73100176-DF0B-4900-AA52-4E67D7D04895}
	operator Vcleditors::_di_ICustomPropertyDrawing80()
	{
		Vcleditors::_di_ICustomPropertyDrawing80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomPropertyDrawing80*(void) { return (Vcleditors::ICustomPropertyDrawing80*)&__ICustomPropertyDrawing80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator Vcleditors::_di_ICustomPropertyDrawing()
	{
		Vcleditors::_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomPropertyDrawing*(void) { return (Vcleditors::ICustomPropertyDrawing*)&__ICustomPropertyDrawing80; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzActivePageProperty : public Designeditors::TComponentProperty
{
	typedef Designeditors::TComponentProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzActivePageProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TComponentProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzActivePageProperty(void) { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TRzDateTimeFormatFilter : unsigned char { ffAll, ffDates, ffTimes };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzDateTimeFormatProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
protected:
	virtual TRzDateTimeFormatFilter __fastcall FormatFilter(void);
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzDateTimeFormatProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzDateTimeFormatProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzClockStatusFormatProperty : public TRzDateTimeFormatProperty
{
	typedef TRzDateTimeFormatProperty inherited;
	
protected:
	virtual TRzDateTimeFormatFilter __fastcall FormatFilter(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzClockStatusFormatProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TRzDateTimeFormatProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzClockStatusFormatProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzDTPFormatProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzDTPFormatProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzDTPFormatProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSpinValueProperty : public Designeditors::TFloatProperty
{
	typedef Designeditors::TFloatProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzSpinValueProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TFloatProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzSpinValueProperty(void) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzSpinnerGlyphProperty : public Designeditors::TFloatProperty
{
	typedef Designeditors::TFloatProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzSpinnerGlyphProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TFloatProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzSpinnerGlyphProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzFileNameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzFileNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzFileNameProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzActionProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzActionProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzActionProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCustomColorsProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TRzCustomColorsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TRzCustomColorsProperty(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCustomButtonGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
protected:
	virtual int __fastcall GetCount(void);
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzCustomButtonGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzCustomButtonGuidelines(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzButtonGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
protected:
	virtual int __fastcall GetCount(void);
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzButtonGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzButtonGuidelines(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzToolButtonGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
protected:
	virtual int __fastcall GetCount(void);
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzToolButtonGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzToolButtonGuidelines(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzCaptionGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
protected:
	virtual int __fastcall GetCount(void);
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzCaptionGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzCaptionGuidelines(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzLabelGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
protected:
	virtual int __fastcall GetCount(void);
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzLabelGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzLabelGuidelines(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzPanelGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
protected:
	virtual int __fastcall GetCount(void);
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzPanelGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzPanelGuidelines(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzPageControlGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
public:
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzPageControlGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzPageControlGuidelines(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRzTabControlGuidelines : public Vcleditors::TControlGuidelines
{
	typedef Vcleditors::TControlGuidelines inherited;
	
public:
	virtual int __fastcall GetDesignerGuideOffset(int Index);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TRzTabControlGuidelines(const Designintf::_di_IDesigner ADesigner) : Vcleditors::TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRzTabControlGuidelines(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TRzPaletteSep : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	__fastcall virtual TRzPaletteSep(System::Classes::TComponent* AOwner);
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep(void) { }
	
};


class PASCALIMPLEMENTATION TRzPaletteSep_Panels : public TRzPaletteSep
{
	typedef TRzPaletteSep inherited;
	
public:
	/* TRzPaletteSep.Create */ inline __fastcall virtual TRzPaletteSep_Panels(System::Classes::TComponent* AOwner) : TRzPaletteSep(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep_Panels(void) { }
	
};


class PASCALIMPLEMENTATION TRzPaletteSep_Edits : public TRzPaletteSep
{
	typedef TRzPaletteSep inherited;
	
public:
	/* TRzPaletteSep.Create */ inline __fastcall virtual TRzPaletteSep_Edits(System::Classes::TComponent* AOwner) : TRzPaletteSep(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep_Edits(void) { }
	
};


class PASCALIMPLEMENTATION TRzPaletteSep_Lists : public TRzPaletteSep
{
	typedef TRzPaletteSep inherited;
	
public:
	/* TRzPaletteSep.Create */ inline __fastcall virtual TRzPaletteSep_Lists(System::Classes::TComponent* AOwner) : TRzPaletteSep(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep_Lists(void) { }
	
};


class PASCALIMPLEMENTATION TRzPaletteSep_Buttons : public TRzPaletteSep
{
	typedef TRzPaletteSep inherited;
	
public:
	/* TRzPaletteSep.Create */ inline __fastcall virtual TRzPaletteSep_Buttons(System::Classes::TComponent* AOwner) : TRzPaletteSep(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep_Buttons(void) { }
	
};


class PASCALIMPLEMENTATION TRzPaletteSep_Display : public TRzPaletteSep
{
	typedef TRzPaletteSep inherited;
	
public:
	/* TRzPaletteSep.Create */ inline __fastcall virtual TRzPaletteSep_Display(System::Classes::TComponent* AOwner) : TRzPaletteSep(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep_Display(void) { }
	
};


class PASCALIMPLEMENTATION TRzPaletteSep_Shell : public TRzPaletteSep
{
	typedef TRzPaletteSep inherited;
	
public:
	/* TRzPaletteSep.Create */ inline __fastcall virtual TRzPaletteSep_Shell(System::Classes::TComponent* AOwner) : TRzPaletteSep(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep_Shell(void) { }
	
};


class PASCALIMPLEMENTATION TRzPaletteSep_Widgets : public TRzPaletteSep
{
	typedef TRzPaletteSep inherited;
	
public:
	/* TRzPaletteSep.Create */ inline __fastcall virtual TRzPaletteSep_Widgets(System::Classes::TComponent* AOwner) : TRzPaletteSep(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TRzPaletteSep_Widgets(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define ppRaizePanels L"Raize Panels"
#define ppRaizeEdits L"Raize Edits"
#define ppRaizeLists L"Raize Lists"
#define ppRaizeButtons L"Raize Buttons"
#define ppRaizeDisplay L"Raize Display"
#define ppRaizeShell L"Raize Shell"
#define ppRaizeWidgets L"Raize Widgets"
#define RC_SettingsKey L"Software\\Raize\\Raize Components\\5.0"
#define RegisterSection L"Register"
extern DELPHI_PACKAGE System::ResourceString _sRzCustomFramingCategoryName;
#define Rzdesigneditors_sRzCustomFramingCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzCustomFramingCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzHotSpotCategoryName;
#define Rzdesigneditors_sRzHotSpotCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzHotSpotCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzBorderStyleCategoryName;
#define Rzdesigneditors_sRzBorderStyleCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzBorderStyleCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzCustomGlyphsCategoryName;
#define Rzdesigneditors_sRzCustomGlyphsCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzCustomGlyphsCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzTextStyleCategoryName;
#define Rzdesigneditors_sRzTextStyleCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzTextStyleCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzTrackStyleCategoryName;
#define Rzdesigneditors_sRzTrackStyleCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzTrackStyleCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzPrimaryButtonCategoryName;
#define Rzdesigneditors_sRzPrimaryButtonCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzPrimaryButtonCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzAlternateButtonCategoryName;
#define Rzdesigneditors_sRzAlternateButtonCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzAlternateButtonCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sRzSplitterCategoryName;
#define Rzdesigneditors_sRzSplitterCategoryName System::LoadResourceString(&Rzdesigneditors::_sRzSplitterCategoryName)
extern DELPHI_PACKAGE System::UnicodeString __fastcall UniqueName(System::Classes::TComponent* AComponent);
extern DELPHI_PACKAGE void __fastcall CreateVisualStyleMenuItem(Vcl::Menus::TMenuItem* Item, Rzcommon::TRzVisualStyle VisualStyle, Rzcommon::TRzVisualStyle CurrentVisualStyle, System::Classes::TNotifyEvent EventHandler);
extern DELPHI_PACKAGE void __fastcall CreateGradientColorStyleMenuItem(Vcl::Menus::TMenuItem* Item, Rzcommon::TRzGradientColorStyle GradientColorStyle, Rzcommon::TRzGradientColorStyle CurrentGradientColorStyle, System::Classes::TNotifyEvent EventHandler);
extern DELPHI_PACKAGE void __fastcall CreateGroupStyleMenuItem(Vcl::Menus::TMenuItem* Item, Rzpanel::TRzGroupBoxStyle GroupStyle, Rzpanel::TRzGroupBoxStyle CurrentGroupStyle, System::Classes::TNotifyEvent EventHandler);
}	/* namespace Rzdesigneditors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_RZDESIGNEDITORS)
using namespace Rzdesigneditors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// RzdesigneditorsHPP
