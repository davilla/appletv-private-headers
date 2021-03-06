/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileReadingClaim : NSFileAccessClaim {
@private
	NSURL *_url;	// 72 = 0x48
	BOOL _urlDidChange;	// 76 = 0x4c
	unsigned _options;	// 80 = 0x50
	NSFileAccessNode *_location;	// 84 = 0x54
	NSFileAccessNode *_rootNode;	// 88 = 0x58
	int _linkResolutionCount;	// 92 = 0x5c
}
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x31afa66d
- (id)initWithPurposeID:(id)purposeID url:(id)url options:(unsigned)options claimer:(id)claimer;	// 0x31afa5ed
- (BOOL)blocksClaim:(id)claim;	// 0x31afb219
- (void)dealloc;	// 0x31afa821
- (void)devalueSelf;	// 0x31afb101
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x31afaac5
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x31afa86d
- (void)granted;	// 0x31afac45
- (void)invokeClaimer;	// 0x31afae61
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x31afabe1
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x31afabe5
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x31afb1c5
@end

