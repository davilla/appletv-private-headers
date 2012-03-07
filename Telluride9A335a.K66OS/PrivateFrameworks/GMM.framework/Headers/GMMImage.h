/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSString;

@interface GMMImage : PBCodable {
	NSString *_key;	// 4 = 0x4
	int _type;	// 8 = 0x8
	NSData *_imageData;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasImageData;	// G=0x30b5eddd; 
@property(readonly, assign, nonatomic) BOOL hasKey;	// G=0x30b5edc5; 
@property(retain, nonatomic) NSData *imageData;	// G=0x30b5f115; S=0x30b5f125; @synthesize=_imageData
@property(retain, nonatomic) NSString *key;	// G=0x30b5f0c1; S=0x30b5f0d1; @synthesize=_key
@property(assign, nonatomic) int type;	// G=0x30b5f0f5; S=0x30b5f105; @synthesize=_type
- (void)dealloc;	// 0x30b5ed6d
- (id)description;	// 0x30b5edf5
- (id)dictionaryRepresentation;	// 0x30b5ee65
// declared property getter: - (BOOL)hasImageData;	// 0x30b5eddd
// declared property getter: - (BOOL)hasKey;	// 0x30b5edc5
// declared property getter: - (id)imageData;	// 0x30b5f115
// declared property getter: - (id)key;	// 0x30b5f0c1
- (BOOL)readFrom:(id)from;	// 0x30b5ef25
// declared property setter: - (void)setImageData:(id)data;	// 0x30b5f125
// declared property setter: - (void)setKey:(id)key;	// 0x30b5f0d1
// declared property setter: - (void)setType:(int)type;	// 0x30b5f105
// declared property getter: - (int)type;	// 0x30b5f0f5
- (void)writeTo:(id)to;	// 0x30b5f049
@end
