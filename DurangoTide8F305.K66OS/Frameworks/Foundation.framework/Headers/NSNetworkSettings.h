/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject {
@private
	NSNetworkSettingsInternal *_internal;	// 4 = 0x4
}
@property(retain) id proxyDictionary;	// G=0x327e0f7d; S=0x327e0dc9; converted property
+ (id)sharedNetworkSettings;	// 0x327e0fb9
- (id)init;	// 0x327e0ffd
- (id)_init;	// 0x327e1075
- (void)_listenForProxySettingChanges;	// 0x327e128d
- (void)_updateProxySettings;	// 0x327e11ad
- (BOOL)connectedToInternet:(BOOL)internet;	// 0x327e147d
- (void)dealloc;	// 0x327e102d
- (BOOL)isProxyNeededForURL:(id)url;	// 0x327e0dc5
// converted property getter: - (id)proxyDictionary;	// 0x327e0f7d
- (id)proxyPropertiesForURL:(id)url;	// 0x327e0e09
// converted property setter: - (void)setProxyDictionary:(id)dictionary;	// 0x327e0dc9
- (void)setProxyPropertiesForURL:(id)url onStream:(CFReadStreamRef)stream;	// 0x327e1415
@end

