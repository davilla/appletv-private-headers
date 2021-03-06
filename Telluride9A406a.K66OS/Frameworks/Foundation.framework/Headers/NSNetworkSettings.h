/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNetworkSettingsInternal;

@interface NSNetworkSettings : NSObject {
@private
	NSNetworkSettingsInternal *_internal;	// 4 = 0x4
}
@property(retain) id proxyDictionary;	// G=0x35e951bd; S=0x35e9541d; converted property
+ (id)sharedNetworkSettings;	// 0x35e95175
- (id)init;	// 0x35e95111
- (id)_init;	// 0x35e9509d
- (void)_listenForProxySettingChanges;	// 0x35e94f05
- (void)_updateProxySettings;	// 0x35e94e1d
- (BOOL)connectedToInternet:(BOOL)internet;	// 0x35e95409
- (void)dealloc;	// 0x35e95129
- (BOOL)isProxyNeededForURL:(id)url;	// 0x35e95385
// converted property getter: - (id)proxyDictionary;	// 0x35e951bd
- (id)proxyPropertiesForURL:(id)url;	// 0x35e95201
// converted property setter: - (void)setProxyDictionary:(id)dictionary;	// 0x35e9541d
- (void)setProxyPropertiesForURL:(id)url onStream:(CFReadStreamRef)stream;	// 0x35e95389
@end

