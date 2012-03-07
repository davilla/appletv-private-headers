/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOTransitAgent : PBCodable {
	NSString *_name;	// 4 = 0x4
	NSString *_url;	// 8 = 0x8
	NSString *_telephone;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasTelephone;	// G=0x3144fe09; 
@property(readonly, assign, nonatomic) BOOL hasUrl;	// G=0x3144fdf1; 
@property(retain, nonatomic) NSString *name;	// G=0x314500b1; S=0x314500c1; @synthesize=_name
@property(retain, nonatomic) NSString *telephone;	// G=0x31450119; S=0x31450129; @synthesize=_telephone
@property(retain, nonatomic) NSString *url;	// G=0x314500e5; S=0x314500f5; @synthesize=_url
- (void)dealloc;	// 0x3144fd85
- (id)description;	// 0x3144fe21
- (id)dictionaryRepresentation;	// 0x3144fe91
// declared property getter: - (BOOL)hasTelephone;	// 0x3144fe09
// declared property getter: - (BOOL)hasUrl;	// 0x3144fdf1
// declared property getter: - (id)name;	// 0x314500b1
- (BOOL)readFrom:(id)from;	// 0x3144ff3d
// declared property setter: - (void)setName:(id)name;	// 0x314500c1
// declared property setter: - (void)setTelephone:(id)telephone;	// 0x31450129
// declared property setter: - (void)setUrl:(id)url;	// 0x314500f5
// declared property getter: - (id)telephone;	// 0x31450119
// declared property getter: - (id)url;	// 0x314500e5
- (void)writeTo:(id)to;	// 0x3145004d
@end
