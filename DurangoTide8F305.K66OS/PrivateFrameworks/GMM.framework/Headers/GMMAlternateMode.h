/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMAlternateMode : PBCodable {
@private
	int _mode;	// 4 = 0x4
}
@property(assign, nonatomic) int mode;	// G=0x32bb0a71; S=0x32bb0a81; @synthesize=_mode
- (id)init;	// 0x32bb0abd
- (void)dealloc;	// 0x32bb0a91
- (id)description;	// 0x32bb0b4d
- (id)dictionaryRepresentation;	// 0x32bb0ae9
// declared property getter: - (int)mode;	// 0x32bb0a71
- (BOOL)readFrom:(id)from;	// 0x32bb0c15
// declared property setter: - (void)setMode:(int)mode;	// 0x32bb0a81
- (void)writeTo:(id)to;	// 0x32bb0be9
@end

