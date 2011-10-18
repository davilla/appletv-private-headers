/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEODownloadMetadata : PBCodable {
	double _timestamp;	// 4 = 0x4
	NSString *_etag;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *etag;	// G=0x31cfdd89; S=0x31cfdd99; @synthesize=_etag
@property(readonly, assign, nonatomic) BOOL hasEtag;	// G=0x31cfdad1; 
@property(assign, nonatomic) double timestamp;	// G=0x31cfdd5d; S=0x31cfdd75; @synthesize=_timestamp
- (void)dealloc;	// 0x31cfda8d
- (id)description;	// 0x31cfdae9
- (id)dictionaryRepresentation;	// 0x31cfdb59
// declared property getter: - (id)etag;	// 0x31cfdd89
// declared property getter: - (BOOL)hasEtag;	// 0x31cfdad1
- (BOOL)readFrom:(id)from;	// 0x31cfdbf5
// declared property setter: - (void)setEtag:(id)etag;	// 0x31cfdd99
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x31cfdd75
// declared property getter: - (double)timestamp;	// 0x31cfdd5d
- (void)writeTo:(id)to;	// 0x31cfdcfd
@end

