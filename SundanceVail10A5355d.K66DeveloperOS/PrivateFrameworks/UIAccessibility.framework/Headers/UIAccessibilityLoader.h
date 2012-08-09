/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <NSObject.h> // Unknown library


@interface UIAccessibilityLoader : NSObject {
}
+ (id)_accessibilityBundlesForBundle:(id)bundle;	// 0x360cc461
+ (void)_accessibilityInitializeRuntimeOverrides;	// 0x360ccd45
+ (void)_accessibilityLoadSubbundles:(id)subbundles;	// 0x360ccc29
+ (void)_accessibilityReenabled;	// 0x360cd065
+ (void)_accessibilityStartServer;	// 0x360ccd79
+ (void)_accessibilityStopServer;	// 0x360cd0b1
+ (id)_axBundleForBundle:(id)bundle;	// 0x360cc5ad
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load;	// 0x360ccb59
+ (id)_loadAXBundleForBundle:(id)bundle didLoad:(BOOL *)load forceLoad:(BOOL)load3 loadSubbundles:(BOOL)subbundles;	// 0x360cc999
+ (void)initialize;	// 0x360cc321
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load;	// 0x360cc945
+ (id)loadAccessibilityBundle:(id)bundle didLoad:(BOOL *)load force:(BOOL)force;	// 0x360cc969
+ (void)loadActualAccessibilityBundle:(id)bundle didLoad:(BOOL *)load loadSubbundles:(BOOL)subbundles;	// 0x360cc7b1
@end
