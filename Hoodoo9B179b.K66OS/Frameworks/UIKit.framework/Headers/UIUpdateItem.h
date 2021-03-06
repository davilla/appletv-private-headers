/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewUpdateGap, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject {
@private
	int _action;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	int _animation;	// 12 = 0xc
	float _offset;	// 16 = 0x10
	UITableViewUpdateGap *_gap;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) int action;	// G=0x32f73531; @synthesize=_action
@property(assign, nonatomic) int animation;	// G=0x32f72049; S=0x330511d1; @synthesize=_animation
@property(assign, nonatomic) UITableViewUpdateGap *gap;	// G=0x3315559d; S=0x331555ad; @synthesize=_gap
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x32f72039; @synthesize=_indexPath
@property(assign, nonatomic) float offset;	// G=0x3315557d; S=0x3315558d; @synthesize=_offset
- (id)initWithAction:(int)action forIndexPath:(id)indexPath animation:(int)animation;	// 0x32f6fbb1
- (id)_actionDescription;	// 0x33155525
// declared property getter: - (int)action;	// 0x32f73531
// declared property getter: - (int)animation;	// 0x32f72049
- (int)compareIndexPaths:(id)paths;	// 0x32fe84b5
- (void)dealloc;	// 0x32f7d165
// declared property getter: - (id)gap;	// 0x3315559d
// declared property getter: - (id)indexPath;	// 0x32f72039
- (int)inverseCompareIndexPaths:(id)paths;	// 0x32fed371
- (BOOL)isSectionOperation;	// 0x32f72059
// declared property getter: - (float)offset;	// 0x3315557d
// declared property setter: - (void)setAnimation:(int)animation;	// 0x330511d1
// declared property setter: - (void)setGap:(id)gap;	// 0x331555ad
// declared property setter: - (void)setOffset:(float)offset;	// 0x3315558d
@end

