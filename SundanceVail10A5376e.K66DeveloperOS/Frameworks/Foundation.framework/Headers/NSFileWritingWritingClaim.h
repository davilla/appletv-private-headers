/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileWritingWritingClaim : NSFileAccessClaim {
	NSURL *_url1;	// 76 = 0x4c
	BOOL _url1DidChange;	// 80 = 0x50
	unsigned _options1;	// 84 = 0x54
	NSURL *_url2;	// 88 = 0x58
	BOOL _url2DidChange;	// 92 = 0x5c
	unsigned _options2;	// 96 = 0x60
	NSFileAccessNode *_location1;	// 100 = 0x64
	NSFileAccessNode *_location2;	// 104 = 0x68
}
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x34e4c0dd
- (id)initWithPurposeID:(id)purposeID url:(id)url options:(unsigned)options url:(id)url4 options:(unsigned)options5 claimer:(id)claimer;	// 0x34e4c035
- (BOOL)blocksClaim:(id)claim;	// 0x34e4d0ed
- (void)dealloc;	// 0x34e4c315
- (void)devalueSelf;	// 0x34e4cefd
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x34e4c681
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x34e4c379
- (void)granted;	// 0x34e4c979
- (void)invokeClaimer;	// 0x34e4cd45
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x34e4c831
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x34e4c8d9
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x34e4d069
@end

