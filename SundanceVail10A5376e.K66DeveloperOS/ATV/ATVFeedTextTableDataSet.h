/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTextTableDataSet : XXUnknownSuperclass {
	NSMutableArray *_rows;	// 4 = 0x4
	NSArray *_headerLabels;	// 8 = 0x8
}
@property(retain) NSArray *headerLabels;	// G=0x1440b5; S=0x1440c9; @synthesize=_headerLabels
@property(readonly, assign) NSArray *rows;	// G=0x143ffd; 
- (id)init;	// 0x143f3d
- (void)addRow:(id)row;	// 0x14400d
- (void)dealloc;	// 0x143f99
// declared property getter: - (id)headerLabels;	// 0x1440b5
// declared property getter: - (id)rows;	// 0x143ffd
// declared property setter: - (void)setHeaderLabels:(id)labels;	// 0x1440c9
@end

