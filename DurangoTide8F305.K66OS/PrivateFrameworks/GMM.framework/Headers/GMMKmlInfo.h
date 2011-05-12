/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMDocumentInfo;

@interface GMMKmlInfo : PBCodable {
@private
	GMMDocumentInfo *_sourceDocument;	// 4 = 0x4
	BOOL _isUserCreated;	// 8 = 0x8
	BOOL _hasIsUserCreated;	// 9 = 0x9
}
@property(readonly, assign, nonatomic) BOOL hasIsUserCreated;	// G=0x32b8f251; @synthesize=_hasIsUserCreated
@property(readonly, assign, nonatomic) BOOL hasSourceDocument;	// G=0x32b8f221; 
@property(assign, nonatomic) BOOL isUserCreated;	// G=0x32b8f261; S=0x32b8f235; @synthesize=_isUserCreated
@property(retain, nonatomic) GMMDocumentInfo *sourceDocument;	// G=0x32b8f271; S=0x32b8f719; @synthesize=_sourceDocument
- (id)init;	// 0x32b8f6d9
- (void)dealloc;	// 0x32b8f691
- (id)description;	// 0x32b8f32d
- (id)dictionaryRepresentation;	// 0x32b8f281
// declared property getter: - (BOOL)hasIsUserCreated;	// 0x32b8f251
// declared property getter: - (BOOL)hasSourceDocument;	// 0x32b8f221
// declared property getter: - (BOOL)isUserCreated;	// 0x32b8f261
- (BOOL)readFrom:(id)from;	// 0x32b8f4e5
// declared property setter: - (void)setIsUserCreated:(BOOL)created;	// 0x32b8f235
// declared property setter: - (void)setSourceDocument:(id)document;	// 0x32b8f719
// declared property getter: - (id)sourceDocument;	// 0x32b8f271
- (void)writeTo:(id)to;	// 0x32b8f411
@end

