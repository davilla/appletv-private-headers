/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewController.h> // Unknown library

@class UIBarButtonItem;
@protocol ABPickerViewControllerDelegate, ABStyleProvider, ABPickerViewControllerDismissDelegate;

@interface ABPickerViewController : UITableViewController {
	void *_context;	// 200 = 0xc8
	id _defaultValue;	// 204 = 0xcc
	SEL _selectionAction;	// 208 = 0xd0
	id<ABPickerViewControllerDelegate> _delegate;	// 212 = 0xd4
	id<ABPickerViewControllerDismissDelegate> _dismissDelegate;	// 216 = 0xd8
	id<ABStyleProvider> _styleProvider;	// 220 = 0xdc
}
@property(readonly, assign, nonatomic) UIBarButtonItem *cancelBarButtonItem;	// G=0x370890a1; 
@property(assign, nonatomic) void *context;	// G=0x37089ecd; S=0x37089581; @synthesize=_context
@property(retain, nonatomic) id defaultValue;	// G=0x3708f941; S=0x370bafb1; @synthesize=_defaultValue
@property(assign, nonatomic) id<ABPickerViewControllerDelegate> delegate;	// G=0x370bafc1; S=0x37089571; @synthesize=_delegate
@property(assign, nonatomic) id<ABPickerViewControllerDismissDelegate> dismissDelegate;	// G=0x370bafd1; S=0x37089c41; @synthesize=_dismissDelegate
@property(readonly, assign, nonatomic) UIBarButtonItem *doneBarButtonItem;	// G=0x370badf5; 
@property(assign, nonatomic) SEL selectionAction;	// G=0x37089ea9; S=0x370bafe1; @synthesize=_selectionAction
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x37089d81; S=0x37089561; @synthesize=_styleProvider
- (BOOL)_allowsAutorotation;	// 0x37089d11
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x37089d55
- (float)ab_heightToFitForViewInPopoverView;	// 0x370bae65
- (void)attemptDismissAfterSelectingItem:(id)item;	// 0x37089e1d
// declared property getter: - (id)cancelBarButtonItem;	// 0x370890a1
- (void)cancelButtonClicked:(id)clicked;	// 0x370bae51
// declared property getter: - (void *)context;	// 0x37089ecd
- (void)dealloc;	// 0x3708a415
// declared property getter: - (id)defaultValue;	// 0x3708f941
// declared property getter: - (id)delegate;	// 0x370bafc1
// declared property getter: - (id)dismissDelegate;	// 0x370bafd1
// declared property getter: - (id)doneBarButtonItem;	// 0x370badf5
// declared property getter: - (SEL)selectionAction;	// 0x37089ea9
// declared property setter: - (void)setContext:(void *)context;	// 0x37089581
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x370bafb1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37089571
// declared property setter: - (void)setDismissDelegate:(id)delegate;	// 0x37089c41
// declared property setter: - (void)setSelectionAction:(SEL)action;	// 0x370bafe1
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x37089561
// declared property getter: - (id)styleProvider;	// 0x37089d81
- (void)viewDidLoad;	// 0x37089321
@end

