/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDRoot.h"
#import "iWorkImport-Structs.h"

@class GQDSStylesheet;

@interface GQDLSDocument : GQDRoot {
	GQDSStylesheet *mStylesheet;	// 36 = 0x24
	BOOL mIsOldAssetNameMapInitialized;	// 40 = 0x28
	CFDictionaryRef mOldAssetNameMap;	// 44 = 0x2c
}
@property(retain) id stylesheet;	// G=0x3507c18d; S=0x3507c19d; converted property
+ (xmlNs *)appNamespace;	// 0x3507c119
- (CFStringRef)createUpgradedAppBundleResourcePath:(CFStringRef)path;	// 0x3507c27d
- (CFURLRef)createUrlToAppBundleResource:(CFStringRef)appBundleResource processorBundle:(CFBundleRef)bundle;	// 0x3507c1d9
- (void)dealloc;	// 0x3507c129
- (void)initializeAppBundleResourcesUrl;	// 0x3507c251
// converted property setter: - (void)setStylesheet:(id)stylesheet;	// 0x3507c19d
// converted property getter: - (id)stylesheet;	// 0x3507c18d
@end
