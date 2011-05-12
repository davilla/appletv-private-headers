/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UINavigationController.h"

@class NSMutableDictionary, NSString;
@protocol UIVideoEditorControllerDelegate, UINavigationControllerDelegate;

@interface UIVideoEditorController : UINavigationController {
@private
	int _previousStatusBarMode;	// 212 = 0xd4
	NSMutableDictionary *_properties;	// 216 = 0xd8
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	} _flags;	// 220 = 0xdc
}
@property(assign, nonatomic) id<UINavigationControllerDelegate, UIVideoEditorControllerDelegate> delegate;	// @dynamic
@property(assign, nonatomic) double videoMaximumDuration;	// G=0x321ea399; S=0x321ea359; 
@property(copy, nonatomic) NSString *videoPath;	// G=0x321ea3e5; S=0x321ea3c9; 
@property(assign, nonatomic) unsigned videoQuality;	// G=0x321ea329; S=0x321ea2e9; 
+ (BOOL)canEditVideoAtPath:(id)path;	// 0x321eaa41
- (id)init;	// 0x321ea985
- (void)_autoDismiss;	// 0x321ea575
- (id)_createInitialController;	// 0x321ea9e5
- (BOOL)_didRevertStatusBar;	// 0x321ea065
- (void)_initializeProperties;	// 0x321ea1bd
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x321ea079
- (id)_properties;	// 0x321ea171
- (void)_removeAllChildren;	// 0x321ea625
- (void)_setProperties:(id)properties;	// 0x321ea295
- (void)_setValue:(id)value forProperty:(id)property;	// 0x321ea109
- (void)_setupControllers;	// 0x321ea5b1
- (id)_valueForProperty:(id)property;	// 0x321ea0c5
- (void)editVideoViewController:(id)controller didFailWithError:(id)error;	// 0x321ea401
- (void)editVideoViewController:(id)controller didTrimVideoWithOptions:(id)options;	// 0x321ea469
- (void)editVideoViewControllerDidCancel:(id)editVideoViewController;	// 0x321ea519
- (void)setParentViewController:(id)controller;	// 0x321ea921
// declared property setter: - (void)setVideoMaximumDuration:(double)duration;	// 0x321ea359
// declared property setter: - (void)setVideoPath:(id)path;	// 0x321ea3c9
// declared property setter: - (void)setVideoQuality:(unsigned)quality;	// 0x321ea2e9
// declared property getter: - (double)videoMaximumDuration;	// 0x321ea399
// declared property getter: - (id)videoPath;	// 0x321ea3e5
// declared property getter: - (unsigned)videoQuality;	// 0x321ea329
- (void)viewDidDisappear:(BOOL)view;	// 0x321ea085
- (void)viewWillAppear:(BOOL)view;	// 0x321ea879
- (void)viewWillDisappear:(BOOL)view;	// 0x321ea6b1
@end

