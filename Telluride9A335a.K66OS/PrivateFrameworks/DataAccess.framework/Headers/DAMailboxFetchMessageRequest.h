/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DAMailboxRequest.h"

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
	NSString *_messageID;	// 8 = 0x8
	int _bodyFormat;	// 12 = 0xc
	int _maxSize;	// 16 = 0x10
}
@property(readonly, assign) int bodyFormat;	// G=0x3225a4a9; converted property
@property(readonly, assign) int maxSize;	// G=0x3225a4b9; converted property
@property(readonly, retain) NSString *messageID;	// G=0x3225a499; converted property
- (id)initRequestForBodyFormat:(int)bodyFormat withMessageID:(id)messageID withBodySizeLimit:(int)bodySizeLimit;	// 0x3225a409
// converted property getter: - (int)bodyFormat;	// 0x3225a4a9
- (void)dealloc;	// 0x3225a6b1
- (id)description;	// 0x3225a629
- (unsigned)hash;	// 0x3225a4c9
- (BOOL)isEqual:(id)equal;	// 0x3225a565
// converted property getter: - (int)maxSize;	// 0x3225a4b9
// converted property getter: - (id)messageID;	// 0x3225a499
@end

