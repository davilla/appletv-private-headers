/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "AddressBookUI-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import <NSObject.h> // Unknown library

@class UIResponder, UIActionSheet, UIWindow, UIPopoverController, UIBarButtonItem, UIView;
@protocol ABPopoverRepresentDelegate;

@interface ABPopoverManager : NSObject <UIPopoverControllerDelegate, UIActionSheetDelegate> {
@private
	UIView *_autorotateView;	// 4 = 0x4
	UIResponder *_autorotateResponder;	// 8 = 0x8
	UIBarButtonItem *_autorotateBarButtonItem;	// 12 = 0xc
	unsigned _autorotateDirections;	// 16 = 0x10
	UIPopoverController *_autorotatePopoverController;	// 20 = 0x14
	UIActionSheet *_autorotateActionSheet;	// 24 = 0x18
	id<ABPopoverRepresentDelegate> _representDelegate;	// 28 = 0x1c
	id _realDelegate;	// 32 = 0x20
	BOOL _rotating;	// 36 = 0x24
}
@property(retain, nonatomic) UIActionSheet *autorotateActionSheet;	// G=0x34cbeac9; S=0x34cbead9; @synthesize=_autorotateActionSheet
@property(retain, nonatomic) UIBarButtonItem *autorotateBarButtonItem;	// G=0x34cbea69; S=0x34cbea79; @synthesize=_autorotateBarButtonItem
@property(assign, nonatomic) unsigned autorotateDirrections;	// G=0x34cbea89; S=0x34cbea99; @synthesize=_autorotateDirections
@property(retain, nonatomic) UIPopoverController *autorotatePopoverController;	// G=0x34cbeaa9; S=0x34cbeab9; @synthesize=_autorotatePopoverController
@property(retain, nonatomic) UIResponder *autorotateResponder;	// G=0x34cbea49; S=0x34cbea59; @synthesize=_autorotateResponder
@property(retain, nonatomic) UIView *autorotateView;	// G=0x34cbea29; S=0x34cbea39; @synthesize=_autorotateView
@property(readonly, assign, nonatomic) UIWindow *observedWindow;	// G=0x34cbdcd1; 
@property(retain, nonatomic) id realDelegate;	// G=0x34cbeae9; S=0x34cbeaf9; @synthesize=_realDelegate
@property(retain, nonatomic) id<ABPopoverRepresentDelegate> representDelegate;	// G=0x34cbeb09; S=0x34cbeb19; @synthesize=_representDelegate
+ (void)actionSheet:(id)sheet dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x34cbe709
+ (void)actionSheet:(id)sheet showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x34cbe4a9
+ (void)actionSheet:(id)sheet showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated autorotate:(BOOL)autorotate;	// 0x34cbe671
+ (void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x34cbe469
+ (void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated direction:(unsigned)direction autorotate:(BOOL)autorotate;	// 0x34cbe521
+ (void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view direction:(unsigned)direction animated:(BOOL)animated;	// 0x34cbe3d1
+ (void)actionSheet:(id)sheet showFromView:(id)view animated:(BOOL)animated autorotate:(BOOL)autorotate;	// 0x34cbe641
+ (void)actionSheet:(id)sheet showFromView:(id)view animated:(BOOL)animated direction:(unsigned)direction autorotate:(BOOL)autorotate;	// 0x34cbe5cd
+ (void)dismissPopoverForActionSheet:(id)actionSheet;	// 0x34cbe799
+ (id)managerForPresenter:(id)presenter;	// 0x34cbd539
+ (void)popoverController:(id)controller dismissPopoverAnimated:(BOOL)animated;	// 0x34c80209
+ (void)popoverController:(id)controller presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x34cbe855
+ (void)popoverController:(id)controller presentPopoverFromView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated representDelegate:(id)delegate;	// 0x34cbe8e5
+ (void)removeManagerForPresenter:(id)presenter;	// 0x34cbd631
+ (BOOL)resignFirstResponderIfNeeded;	// 0x34cbe365
+ (void)stopAutorotatePresenter:(id)presenter;	// 0x34cbe9b1
- (id)init;	// 0x34cbd691
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x34cbe2d5
// declared property getter: - (id)autorotateActionSheet;	// 0x34cbeac9
// declared property getter: - (id)autorotateBarButtonItem;	// 0x34cbea69
// declared property getter: - (unsigned)autorotateDirrections;	// 0x34cbea89
// declared property getter: - (id)autorotatePopoverController;	// 0x34cbeaa9
// declared property getter: - (id)autorotateResponder;	// 0x34cbea49
// declared property getter: - (id)autorotateView;	// 0x34cbea29
- (BOOL)autorotates;	// 0x34cbdd49
- (void)dealloc;	// 0x34cbd759
- (id)delegateOwner;	// 0x34cbdd21
- (void)forwardInvocation:(id)invocation;	// 0x34cbe201
- (void)keyboardDidHide:(id)keyboard;	// 0x34cbd8f1
- (void)keyboardDidShow:(id)keyboard;	// 0x34cbd84d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34cbe1b5
// declared property getter: - (id)observedWindow;	// 0x34cbdcd1
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x34cbe255
// declared property getter: - (id)realDelegate;	// 0x34cbeae9
// declared property getter: - (id)representDelegate;	// 0x34cbeb09
- (BOOL)respondsToSelector:(SEL)selector;	// 0x34cbe165
- (void)revertDelegate;	// 0x34cbde8d
// declared property setter: - (void)setAutorotateActionSheet:(id)sheet;	// 0x34cbead9
// declared property setter: - (void)setAutorotateBarButtonItem:(id)item;	// 0x34cbea79
// declared property setter: - (void)setAutorotateDirrections:(unsigned)dirrections;	// 0x34cbea99
// declared property setter: - (void)setAutorotatePopoverController:(id)controller;	// 0x34cbeab9
// declared property setter: - (void)setAutorotateResponder:(id)responder;	// 0x34cbea59
// declared property setter: - (void)setAutorotateView:(id)view;	// 0x34cbea39
// declared property setter: - (void)setRealDelegate:(id)delegate;	// 0x34cbeaf9
// declared property setter: - (void)setRepresentDelegate:(id)delegate;	// 0x34cbeb19
- (void)startAutorotateActionSheet:(id)sheet fromBarButtonItem:(id)barButtonItem;	// 0x34cbe079
- (void)startAutorotateActionSheet:(id)sheet fromView:(id)view;	// 0x34cbdfa5
- (void)startAutorotatePopoverController:(id)controller showFromView:(id)view permittedArrowDirections:(unsigned)directions representDelegate:(id)delegate;	// 0x34cbdd85
- (void)startObservingRotationOfWindow:(id)window;	// 0x34cbdbe5
- (void)stopAutorotate;	// 0x34cbdee5
- (void)stopObservingRotation;	// 0x34cbdc7d
- (void)windowDidRotate:(id)window;	// 0x34cbda55
- (void)windowWillRotate:(id)window;	// 0x34cbd995
@end

