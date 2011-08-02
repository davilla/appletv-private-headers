/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTextTableDataSet : NSObject {
@private
	NSMutableArray *_rows;	// 4 = 0x4
	NSArray *_headerLabels;	// 8 = 0x8
}
@property(retain) NSArray *headerLabels;	// G=0x306f3499; S=0x306f34f9; @synthesize=_headerLabels
@property(readonly, assign) NSArray *rows;	// G=0x306f30d5; 
- (id)init;	// 0x306f3299
- (void)addRow:(id)row;	// 0x306f357d
- (void)dealloc;	// 0x306f323d
// declared property getter: - (id)headerLabels;	// 0x306f3499
// declared property getter: - (id)rows;	// 0x306f30d5
// declared property setter: - (void)setHeaderLabels:(id)labels;	// 0x306f34f9
@end
