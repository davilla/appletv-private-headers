/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSMutableDictionary;

@interface BBObserverBulletinAttachmentInfo : NSObject {
	NSMutableDictionary *_imageSizePairs;	// 4 = 0x4
@private
	BOOL imagesFetched;	// 8 = 0x8
	BOOL sizesFetched;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL imagesFetched;	// G=0x34cc28cd; S=0x34cc28dd; @synthesize
@property(assign, nonatomic) BOOL sizesFetched;	// G=0x34cc28ed; S=0x34cc28fd; @synthesize
- (id)init;	// 0x34cc26b1
- (id)_pairForKey:(id)key create:(BOOL)create;	// 0x34cc2761
- (void)dealloc;	// 0x34cc2715
- (id)imageForKey:(id)key;	// 0x34cc2861
// declared property getter: - (BOOL)imagesFetched;	// 0x34cc28cd
- (void)setImage:(id)image forKey:(id)key;	// 0x34cc27fd
// declared property setter: - (void)setImagesFetched:(BOOL)fetched;	// 0x34cc28dd
- (void)setSize:(CGSize)size forKey:(id)key;	// 0x34cc282d
// declared property setter: - (void)setSizesFetched:(BOOL)fetched;	// 0x34cc28fd
- (CGSize)sizeForKey:(id)key;	// 0x34cc288d
// declared property getter: - (BOOL)sizesFetched;	// 0x34cc28ed
@end
