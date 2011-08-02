/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOMapQueryCollectionRequest : PBRequest {
@private
	NSMutableArray *_requestElementss;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *requestElementss;	// G=0x30ce5421; S=0x30ce5919; @synthesize=_requestElementss
@property(readonly, assign, nonatomic) int requestElementssCount;	// G=0x30ce5899; 
- (id)init;	// 0x30ce5431
- (void)addRequestElements:(id)elements;	// 0x30ce579d
- (void)dealloc;	// 0x30ce58bd
- (id)description;	// 0x30ce545d
- (BOOL)readFrom:(id)from;	// 0x30ce5625
- (id)requestElementsAtIndex:(unsigned)index;	// 0x30ce57cd
// declared property getter: - (id)requestElementss;	// 0x30ce5421
// declared property getter: - (int)requestElementssCount;	// 0x30ce5899
- (unsigned)requestTypeCode;	// 0x30ce5419
- (Class)responseClass;	// 0x30ce5905
- (void)setRequestElements:(id)elements atIndex:(unsigned)index;	// 0x30ce5831
// declared property setter: - (void)setRequestElementss:(id)elementss;	// 0x30ce5919
- (void)writeTo:(id)to;	// 0x30ce54f9
@end

