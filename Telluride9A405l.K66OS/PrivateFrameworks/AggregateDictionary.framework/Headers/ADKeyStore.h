/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet;

@interface ADKeyStore : NSObject {
	NSMutableSet *_whitelistedScalarKeys;	// 4 = 0x4
	NSMutableSet *_whitelistedScalarPrefixes;	// 8 = 0x8
	NSMutableSet *_whitelistedDistributionKeys;	// 12 = 0xc
	NSMutableSet *_whitelistedDistributionPrefixes;	// 16 = 0x10
	NSMutableSet *_whitelistedMetadataKeys;	// 20 = 0x14
	BOOL _isInternalDevice;	// 24 = 0x18
}
+ (id)defaultWhitelist;	// 0x350fd0d5
- (id)initWithDefaultPath;	// 0x350fd359
- (id)initWithPath:(id)path;	// 0x350fd451
- (void)dealloc;	// 0x350fd039
- (BOOL)distributionKeyIsWhitelisted:(id)whitelisted;	// 0x350fd149
- (BOOL)metadataKeyIsWhitelisted:(id)whitelisted;	// 0x350fd101
- (BOOL)scalarKeyIsWhitelisted:(id)whitelisted;	// 0x350fd251
@end

