/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MMiDiskSession : NSObject {
@private
	id _credentials;	// 4 = 0x4
	NSString *_username;	// 8 = 0x8
	NSString *_owner;	// 12 = 0xc
	NSString *_host;	// 16 = 0x10
	int _port;	// 20 = 0x14
	NSString *_scheme;	// 24 = 0x18
}
@property(readonly, retain) NSString *owner;	// G=0x33c57801; converted property
+ (id)_iDiskSessionWithCredentials:(id)credentials owner:(id)owner host:(id)host port:(int)port scheme:(id)scheme;	// 0x33c57595
- (id)_iDiskPathForUri:(id)uri;	// 0x33c575e9
- (id)_initWithCredentials:(id)credentials owner:(id)owner host:(id)host port:(int)port scheme:(id)scheme;	// 0x33c573c1
- (void)_setDoCheckPreAuth:(BOOL)auth;	// 0x33c573bd
- (void)dealloc;	// 0x33c57839
- (id)getDataAtPath:(id)path withHeaders:(id)headers andQueryParameters:(id)parameters;	// 0x33c5769d
// converted property getter: - (id)owner;	// 0x33c57801
- (void)setIsSynchronous:(BOOL)synchronous;	// 0x33c573b9
@end

