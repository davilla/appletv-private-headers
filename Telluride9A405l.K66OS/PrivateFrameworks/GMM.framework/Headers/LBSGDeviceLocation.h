/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGLocation, LBSGCell;

@interface LBSGDeviceLocation : PBCodable {
	LBSGLocation *_location;	// 4 = 0x4
	LBSGCell *_cell;	// 8 = 0x8
}
@property(retain, nonatomic) LBSGCell *cell;	// G=0x315a2e61; S=0x315a2e71; @synthesize=_cell
@property(readonly, assign, nonatomic) BOOL hasCell;	// G=0x315a29e9; 
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x315a29d1; 
@property(retain, nonatomic) LBSGLocation *location;	// G=0x315a2e2d; S=0x315a2e3d; @synthesize=_location
// declared property getter: - (id)cell;	// 0x315a2e61
- (void)dealloc;	// 0x315a2979
- (id)description;	// 0x315a2a01
- (id)dictionaryRepresentation;	// 0x315a2a71
// declared property getter: - (BOOL)hasCell;	// 0x315a29e9
// declared property getter: - (BOOL)hasLocation;	// 0x315a29d1
// declared property getter: - (id)location;	// 0x315a2e2d
- (BOOL)readFrom:(id)from;	// 0x315a2af1
// declared property setter: - (void)setCell:(id)cell;	// 0x315a2e71
// declared property setter: - (void)setLocation:(id)location;	// 0x315a2e3d
- (void)writeTo:(id)to;	// 0x315a2cfd
@end
