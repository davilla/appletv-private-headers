/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSMutableArray, NSString;

@interface ASResolveRecipientsSingleResponseItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
	NSMutableArray *_recipients;	// 48 = 0x30
}
@property(retain) NSNumber *easStatus;	// G=0x30a83f6d; @synthesize=_easStatus
@property(retain) NSString *emailAddress;	// G=0x30a83f35; S=0x30a83f49; @synthesize=_emailAddress
@property(retain) NSMutableArray *recipients;	// G=0x30a83fa5; S=0x30a83fb9; @synthesize=_recipients
+ (BOOL)acceptsTopLevelLeaves;	// 0x30a83995
+ (BOOL)frontingBasicTypes;	// 0x30a83a91
+ (BOOL)notifyOfUnknownTokens;	// 0x30a83ae5
+ (BOOL)parsingLeafNode;	// 0x30a839e9
+ (BOOL)parsingWithSubItems;	// 0x30a83a3d
- (void)addRecipient:(id)recipient;	// 0x30a83b39
- (id)asParseRules;	// 0x30a83b9d
- (void)dealloc;	// 0x30a83ec1
- (id)description;	// 0x30a83e39
// declared property getter: - (id)easStatus;	// 0x30a83f6d
// declared property getter: - (id)emailAddress;	// 0x30a83f35
// declared property getter: - (id)recipients;	// 0x30a83fa5
- (void)setEASStatus:(id)status;	// 0x30a83f81
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x30a83f49
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x30a83fb9
@end

