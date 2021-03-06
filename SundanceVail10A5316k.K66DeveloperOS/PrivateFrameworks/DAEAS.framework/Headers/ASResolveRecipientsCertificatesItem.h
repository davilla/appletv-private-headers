/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {
	NSNumber *_certCount;	// 40 = 0x28
	NSNumber *_recipientCount;	// 44 = 0x2c
	NSNumber *_easStatus;	// 48 = 0x30
	NSMutableArray *_certificates;	// 52 = 0x34
}
@property(retain) NSNumber *certCount;	// G=0x309a9835; S=0x309a9849; @synthesize=_certCount
@property(readonly, assign) NSArray *certificates;	// G=0x309a98a1; @synthesize=_certificates
@property(retain) NSNumber *easStatus;	// G=0x309a987d; @synthesize=_easStatus
@property(retain) NSNumber *recipientCount;	// G=0x309a9859; S=0x309a986d; @synthesize=_recipientCount
+ (BOOL)acceptsTopLevelLeaves;	// 0x309a9129
+ (id)asParseRules;	// 0x309a9339
+ (BOOL)frontingBasicTypes;	// 0x309a9225
+ (BOOL)notifyOfUnknownTokens;	// 0x309a9279
+ (BOOL)parsingLeafNode;	// 0x309a917d
+ (BOOL)parsingWithSubItems;	// 0x309a91d1
- (void)addCertificateString:(id)string;	// 0x309a92cd
// declared property getter: - (id)certCount;	// 0x309a9835
// declared property getter: - (id)certificates;	// 0x309a98a1
- (void)dealloc;	// 0x309a97a9
- (id)description;	// 0x309a95f9
// declared property getter: - (id)easStatus;	// 0x309a987d
// declared property getter: - (id)recipientCount;	// 0x309a9859
// declared property setter: - (void)setCertCount:(id)count;	// 0x309a9849
- (void)setEASStatus:(id)status;	// 0x309a9891
// declared property setter: - (void)setRecipientCount:(id)count;	// 0x309a986d
@end

