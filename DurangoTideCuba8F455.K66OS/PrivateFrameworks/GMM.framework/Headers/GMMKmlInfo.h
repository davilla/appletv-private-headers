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
@property(readonly, assign, nonatomic) BOOL hasIsUserCreated;	// G=0x3443c251; @synthesize=_hasIsUserCreated
@property(readonly, assign, nonatomic) BOOL hasSourceDocument;	// G=0x3443c221; 
@property(assign, nonatomic) BOOL isUserCreated;	// G=0x3443c261; S=0x3443c235; @synthesize=_isUserCreated
@property(retain, nonatomic) GMMDocumentInfo *sourceDocument;	// G=0x3443c271; S=0x3443c719; @synthesize=_sourceDocument
- (id)init;	// 0x3443c6d9
- (void)dealloc;	// 0x3443c691
- (id)description;	// 0x3443c32d
- (id)dictionaryRepresentation;	// 0x3443c281
// declared property getter: - (BOOL)hasIsUserCreated;	// 0x3443c251
// declared property getter: - (BOOL)hasSourceDocument;	// 0x3443c221
// declared property getter: - (BOOL)isUserCreated;	// 0x3443c261
- (BOOL)readFrom:(id)from;	// 0x3443c4e5
// declared property setter: - (void)setIsUserCreated:(BOOL)created;	// 0x3443c235
// declared property setter: - (void)setSourceDocument:(id)document;	// 0x3443c719
// declared property getter: - (id)sourceDocument;	// 0x3443c271
- (void)writeTo:(id)to;	// 0x3443c411
@end

