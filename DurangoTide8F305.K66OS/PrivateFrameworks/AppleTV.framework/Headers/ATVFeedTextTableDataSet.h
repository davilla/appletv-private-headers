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
@property(retain) NSArray *headerLabels;	// G=0x307c2191; S=0x307c21f1; @synthesize=_headerLabels
@property(readonly, assign) NSArray *rows;	// G=0x307c1dcd; 
- (id)init;	// 0x307c1f91
- (void)addRow:(id)row;	// 0x307c2275
- (void)dealloc;	// 0x307c1f35
// declared property getter: - (id)headerLabels;	// 0x307c2191
// declared property getter: - (id)rows;	// 0x307c1dcd
// declared property setter: - (void)setHeaderLabels:(id)labels;	// 0x307c21f1
@end

