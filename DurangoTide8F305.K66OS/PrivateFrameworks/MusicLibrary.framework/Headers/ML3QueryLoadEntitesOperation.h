/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3QueryLoadOperation.h"
#import "MusicLibrary-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ML3QueryLoadEntitesOperation : ML3QueryLoadOperation {
@private
	NSRange _loadRange;	// 24 = 0x18
	id _block;	// 32 = 0x20
	NSArray *_properties;	// 36 = 0x24
	BOOL _ordered;	// 40 = 0x28
}
@property(copy) id block;	// G=0x333e4015; S=0x333abd3d; @synthesize=_block
@property(assign) NSRange loadRange;	// G=0x333e4365; S=0x333abd11; @synthesize=_loadRange
@property(assign) BOOL ordered;	// G=0x333e2e15; S=0x333e2e25; @synthesize=_ordered
@property(copy) NSArray *properties;	// G=0x333e402d; S=0x333abd65; @synthesize=_properties
- (id)initWithQuery:(id)query;	// 0x333e2e35
- (id)initWithQuery:(id)query loadRange:(NSRange)range ordered:(BOOL)ordered properties:(id)properties block:(id)block;	// 0x333abbf5
// declared property getter: - (id)block;	// 0x333e4015
- (void)dealloc;	// 0x333b58c9
// declared property getter: - (NSRange)loadRange;	// 0x333e4365
- (void)main;	// 0x333abd8d
// declared property getter: - (BOOL)ordered;	// 0x333e2e15
// declared property getter: - (id)properties;	// 0x333e402d
// declared property setter: - (void)setBlock:(id)block;	// 0x333abd3d
// declared property setter: - (void)setLoadRange:(NSRange)range;	// 0x333abd11
// declared property setter: - (void)setOrdered:(BOOL)ordered;	// 0x333e2e25
// declared property setter: - (void)setProperties:(id)properties;	// 0x333abd65
@end
