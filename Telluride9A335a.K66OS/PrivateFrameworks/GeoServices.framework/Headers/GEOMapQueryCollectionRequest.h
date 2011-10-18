/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest {
	NSMutableArray *_requestElements;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x31cde0f1; S=0x31cde101; @synthesize=_requestElements
- (void)addRequestElements:(id)elements;	// 0x31cddbc5
- (void)dealloc;	// 0x31cddb81
- (id)description;	// 0x31cddc69
- (id)dictionaryRepresentation;	// 0x31cddcd9
- (BOOL)readFrom:(id)from;	// 0x31cdde45
// declared property getter: - (id)requestElements;	// 0x31cde0f1
- (id)requestElementsAtIndex:(unsigned)index;	// 0x31cddc49
- (unsigned)requestElementsCount;	// 0x31cddc29
- (unsigned)requestTypeCode;	// 0x31cde0cd
- (Class)responseClass;	// 0x31cde0d5
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x31cde101
- (void)writeTo:(id)to;	// 0x31cddfb9
@end

