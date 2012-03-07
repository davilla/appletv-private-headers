/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPCloudPurchaseRequestSerialQueueEntry : NSObject {
@private
	id item;	// 4 = 0x4
	id block;	// 8 = 0x8
	int identifier;	// 12 = 0xc
}
@property(copy, nonatomic) id block;	// G=0x301b3621; S=0x301b3631; @synthesize
@property(assign, nonatomic) int identifier;	// G=0x301b3655; S=0x301b3665; @synthesize
@property(retain, nonatomic) id item;	// G=0x301b35ed; S=0x301b35fd; @synthesize
@property(readonly, assign, nonatomic) NSString *shortDescription;	// G=0x301b3555; 
- (id)initWithItem:(id)item block:(id)block;	// 0x301b3471
// declared property getter: - (id)block;	// 0x301b3621
- (void)dealloc;	// 0x301b3595
- (id)description;	// 0x301b34f5
// declared property getter: - (int)identifier;	// 0x301b3655
// declared property getter: - (id)item;	// 0x301b35ed
// declared property setter: - (void)setBlock:(id)block;	// 0x301b3631
// declared property setter: - (void)setIdentifier:(int)identifier;	// 0x301b3665
// declared property setter: - (void)setItem:(id)item;	// 0x301b35fd
// declared property getter: - (id)shortDescription;	// 0x301b3555
@end
