/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASMovedItem : ASItem {
	NSString *_srcMsgId;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_dstMsgId;	// 48 = 0x30
}
@property(retain) NSString *dstMsgId;	// G=0x3437f4e5; S=0x3437f4a9; converted property
@property(retain) NSString *srcMsgId;	// G=0x3437f5bd; S=0x3437f581; converted property
@property(retain) NSNumber *status;	// G=0x3437f551; S=0x3437f515; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x3437f8a1
+ (BOOL)frontingBasicTypes;	// 0x3437f7c9
+ (BOOL)notifyOfUnknownTokens;	// 0x3437f781
+ (BOOL)parsingLeafNode;	// 0x3437f859
+ (BOOL)parsingWithSubItems;	// 0x3437f811
- (id)asParseRules;	// 0x3437f5ed
- (void)dealloc;	// 0x3437f8e9
// converted property getter: - (id)dstMsgId;	// 0x3437f4e5
// converted property setter: - (void)setDstMsgId:(id)anId;	// 0x3437f4a9
// converted property setter: - (void)setSrcMsgId:(id)anId;	// 0x3437f581
// converted property setter: - (void)setStatus:(id)status;	// 0x3437f515
// converted property getter: - (id)srcMsgId;	// 0x3437f5bd
// converted property getter: - (id)status;	// 0x3437f551
@end

