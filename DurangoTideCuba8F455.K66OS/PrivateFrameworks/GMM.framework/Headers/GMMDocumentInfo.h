/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMDocumentInfo : PBCodable {
@private
	NSString *_author;	// 4 = 0x4
	NSString *_attributionUrl;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x3443a3f1; S=0x3443a781; @synthesize=_attributionUrl
@property(retain, nonatomic) NSString *author;	// G=0x3443a401; S=0x3443a759; @synthesize=_author
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x3443a3dd; 
@property(readonly, assign, nonatomic) BOOL hasAuthor;	// G=0x3443a3c9; 
- (id)init;	// 0x3443a411
// declared property getter: - (id)attributionUrl;	// 0x3443a3f1
// declared property getter: - (id)author;	// 0x3443a401
- (void)dealloc;	// 0x3443a6fd
- (id)description;	// 0x3443a4ad
- (id)dictionaryRepresentation;	// 0x3443a43d
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x3443a3dd
// declared property getter: - (BOOL)hasAuthor;	// 0x3443a3c9
- (BOOL)readFrom:(id)from;	// 0x3443a601
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x3443a781
// declared property setter: - (void)setAuthor:(id)author;	// 0x3443a759
- (void)writeTo:(id)to;	// 0x3443a591
@end

