/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LBSGLocResponse : PBCodable {
@private
	int _status;	// 4 = 0x4
	NSMutableArray *_replyElementss;	// 8 = 0x8
	NSString *_platformKey;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasPlatformKey;	// G=0x32bafae9; 
@property(retain, nonatomic) NSString *platformKey;	// G=0x32bafafd; S=0x32bb0181; @synthesize=_platformKey
@property(retain, nonatomic) NSMutableArray *replyElementss;	// G=0x32bafb0d; S=0x32bb0159; @synthesize=_replyElementss
@property(readonly, assign, nonatomic) int replyElementssCount;	// G=0x32bb00d9; 
@property(assign, nonatomic) int status;	// G=0x32bafb1d; S=0x32bafb2d; @synthesize=_status
- (id)init;	// 0x32bafb3d
- (void)addReplyElements:(id)elements;	// 0x32baffdd
- (void)dealloc;	// 0x32bb00fd
- (id)description;	// 0x32bafb69
// declared property getter: - (BOOL)hasPlatformKey;	// 0x32bafae9
// declared property getter: - (id)platformKey;	// 0x32bafafd
- (BOOL)readFrom:(id)from;	// 0x32bafe09
- (id)replyElementsAtIndex:(unsigned)index;	// 0x32bb000d
// declared property getter: - (id)replyElementss;	// 0x32bafb0d
// declared property getter: - (int)replyElementssCount;	// 0x32bb00d9
// declared property setter: - (void)setPlatformKey:(id)key;	// 0x32bb0181
- (void)setReplyElements:(id)elements atIndex:(unsigned)index;	// 0x32bb0071
// declared property setter: - (void)setReplyElementss:(id)elementss;	// 0x32bb0159
// declared property setter: - (void)setStatus:(int)status;	// 0x32bafb2d
// declared property getter: - (int)status;	// 0x32bafb1d
- (void)writeTo:(id)to;	// 0x32bafc81
@end

