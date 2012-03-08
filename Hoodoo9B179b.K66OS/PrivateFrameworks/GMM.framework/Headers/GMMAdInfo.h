/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GMMAdInfo : PBCodable {
	NSString *_uniqueId;	// 4 = 0x4
	NSString *_headline;	// 8 = 0x8
	NSString *_creativeLine1;	// 12 = 0xc
	NSString *_creativeLine2;	// 16 = 0x10
	NSString *_linkText;	// 20 = 0x14
	NSString *_linkUrl;	// 24 = 0x18
}
@property(retain, nonatomic) NSString *creativeLine1;	// G=0x31ceb0b9; S=0x31ceb0c9; @synthesize=_creativeLine1
@property(retain, nonatomic) NSString *creativeLine2;	// G=0x31ceb0ed; S=0x31ceb0fd; @synthesize=_creativeLine2
@property(readonly, assign, nonatomic) BOOL hasCreativeLine1;	// G=0x31ceac2d; 
@property(readonly, assign, nonatomic) BOOL hasCreativeLine2;	// G=0x31ceac45; 
@property(readonly, assign, nonatomic) BOOL hasHeadline;	// G=0x31ceac15; 
@property(readonly, assign, nonatomic) BOOL hasLinkText;	// G=0x31ceac5d; 
@property(readonly, assign, nonatomic) BOOL hasLinkUrl;	// G=0x31ceac75; 
@property(retain, nonatomic) NSString *headline;	// G=0x31ceb085; S=0x31ceb095; @synthesize=_headline
@property(retain, nonatomic) NSString *linkText;	// G=0x31ceb121; S=0x31ceb131; @synthesize=_linkText
@property(retain, nonatomic) NSString *linkUrl;	// G=0x31ceb155; S=0x31ceb165; @synthesize=_linkUrl
@property(retain, nonatomic) NSString *uniqueId;	// G=0x31ceb051; S=0x31ceb061; @synthesize=_uniqueId
// declared property getter: - (id)creativeLine1;	// 0x31ceb0b9
// declared property getter: - (id)creativeLine2;	// 0x31ceb0ed
- (void)dealloc;	// 0x31ceab6d
- (id)description;	// 0x31ceac8d
- (id)dictionaryRepresentation;	// 0x31ceacfd
// declared property getter: - (BOOL)hasCreativeLine1;	// 0x31ceac2d
// declared property getter: - (BOOL)hasCreativeLine2;	// 0x31ceac45
// declared property getter: - (BOOL)hasHeadline;	// 0x31ceac15
// declared property getter: - (BOOL)hasLinkText;	// 0x31ceac5d
// declared property getter: - (BOOL)hasLinkUrl;	// 0x31ceac75
// declared property getter: - (id)headline;	// 0x31ceb085
// declared property getter: - (id)linkText;	// 0x31ceb121
// declared property getter: - (id)linkUrl;	// 0x31ceb155
- (BOOL)readFrom:(id)from;	// 0x31ceae2d
// declared property setter: - (void)setCreativeLine1:(id)a1;	// 0x31ceb0c9
// declared property setter: - (void)setCreativeLine2:(id)a2;	// 0x31ceb0fd
// declared property setter: - (void)setHeadline:(id)headline;	// 0x31ceb095
// declared property setter: - (void)setLinkText:(id)text;	// 0x31ceb131
// declared property setter: - (void)setLinkUrl:(id)url;	// 0x31ceb165
// declared property setter: - (void)setUniqueId:(id)anId;	// 0x31ceb061
// declared property getter: - (id)uniqueId;	// 0x31ceb051
- (void)writeTo:(id)to;	// 0x31ceaf9d
@end
