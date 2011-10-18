/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface OAToken : NSObject {
@private
	NSString *key;	// 4 = 0x4
	NSString *secret;	// 8 = 0x8
	NSDictionary *fields;	// 12 = 0xc
}
@property(retain) NSDictionary *fields;	// G=0x343dc290; S=0x343dc25c; @synthesize
@property(copy) NSString *key;	// G=0x343dc1e8; S=0x343dc1b4; @synthesize
@property(copy) NSString *secret;	// G=0x343dc23c; S=0x343dc208; @synthesize
+ (id)tokenWithHTTPResponseBody:(id)httpresponseBody;	// 0x343dc164
+ (id)tokenWithKey:(id)key secret:(id)secret;	// 0x343dc10c
- (id)init;	// 0x343dc5a4
- (id)initWithHTTPResponseBody:(id)httpresponseBody;	// 0x343dc2b0
- (id)initWithKey:(id)key secret:(id)secret;	// 0x343dc51c
- (void)dealloc;	// 0x343dc630
// declared property getter: - (id)fields;	// 0x343dc290
// declared property getter: - (id)key;	// 0x343dc1e8
// declared property getter: - (id)secret;	// 0x343dc23c
// declared property setter: - (void)setFields:(id)fields;	// 0x343dc25c
// declared property setter: - (void)setKey:(id)key;	// 0x343dc1b4
// declared property setter: - (void)setSecret:(id)secret;	// 0x343dc208
@end

