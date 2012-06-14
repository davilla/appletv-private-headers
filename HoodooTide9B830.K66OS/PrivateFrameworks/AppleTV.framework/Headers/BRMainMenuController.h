/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class NSMutableArray, BRMainMenuControl, BRBackgroundTask, NSArray;
@protocol BRAppliance;

@interface BRMainMenuController : BRController {
@private
	NSArray *_applianceInfos;	// 84 = 0x54
	NSMutableArray *_topShelfControllers;	// 88 = 0x58
	BRMainMenuControl *_browser;	// 92 = 0x5c
	BOOL _enabled;	// 96 = 0x60
	BOOL _handlingMainMenuEvent;	// 97 = 0x61
	BRBackgroundTask *_topShelfRefreshTask;	// 100 = 0x64
}
@property(readonly, assign) id<BRAppliance> currentAppliance;	// G=0x329a2421; 
+ (BOOL)handlingMainMenuEvent;	// 0x329a1f81
+ (void)highlightApplianceWithKey:(id)key andCategoryWithIdentifier:(id)identifier;	// 0x329a1ef1
+ (void)setHandlingMainMenuEvent:(BOOL)event;	// 0x329a1ffd
- (id)init;	// 0x329a2081
- (BOOL)_browserItemSelected:(id)selected;	// 0x329a2a95
- (void)_handleWindowMaxBoundsChanged;	// 0x329a2815
- (BOOL)_handlingMainMenuEvent;	// 0x329a2b79
- (void)_highlightApplianceWithKey:(id)key andCategoryWithIdentifier:(id)identifier;	// 0x329a2a75
- (void)_loadAppliances;	// 0x329a2911
- (void)_reloadTopShelvesByRecreating:(BOOL)recreating;	// 0x329a2c1d
- (void)_setHandlingMainMenuEvent:(BOOL)event;	// 0x329a2b89
- (void)_shelfNoLongerFocusable:(id)focusable;	// 0x329a2b99
- (void)_topShelfControllerWillBeHidden:(id)_topShelfController;	// 0x329a2e9d
- (void)_topShelfControllerWillBeShown:(id)_topShelfController;	// 0x329a2e65
- (id)accessibilityLabel;	// 0x329a2441
- (BOOL)canBeRemovedFromStack;	// 0x329a2295
- (void)clearRemembery;	// 0x329a2401
- (void)controlWasActivated;	// 0x329a26d1
- (void)controlWasDeactivated;	// 0x329a2791
// declared property getter: - (id)currentAppliance;	// 0x329a2421
- (void)dealloc;	// 0x329a21bd
- (void)enable;	// 0x329a2299
- (void)mainMenu:(id)menu didSelectCategoryAtIndexPath:(id)indexPath;	// 0x329a24e9
- (id)mainMenu:(id)menu shelfForApplianceAtIndex:(unsigned)index;	// 0x329a2469
- (void)mainMenu:(id)menu willHideShelfAtApplianceIndex:(long)applianceIndex;	// 0x329a2651
- (void)mainMenu:(id)menu willShowShelfAtApplianceIndex:(long)applianceIndex;	// 0x329a2691
- (void)reloadMainMenu;	// 0x329a22ad
@end
