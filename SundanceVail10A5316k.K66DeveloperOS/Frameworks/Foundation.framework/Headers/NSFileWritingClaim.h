/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileWritingClaim : NSFileAccessClaim {
@private
	NSURL *_url;	// 72 = 0x48
	BOOL _urlDidChange;	// 76 = 0x4c
	unsigned _options;	// 80 = 0x50
	NSFileAccessNode *_location;	// 84 = 0x54
}
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x31afb2d5
- (id)initWithPurposeID:(id)purposeID url:(id)url options:(unsigned)options claimer:(id)claimer;	// 0x31afb255
- (BOOL)blocksClaim:(id)claim;	// 0x31afbd19
- (void)dealloc;	// 0x31afb489
- (void)devalueSelf;	// 0x31afbc01
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x31afb72d
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x31afb4d5
- (void)granted;	// 0x31afb8e5
- (void)invokeClaimer;	// 0x31afbad1
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x31afb81d
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x31afb881
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x31afbcc5
@end

