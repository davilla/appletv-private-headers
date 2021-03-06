/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x339e7259
- (void)addProcessorClass:(Class)aClass;	// 0x339e73dd
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x33a0b205
- (void)dealloc;	// 0x33a15f41
- (bool)hasProcessors;	// 0x33b80b91
- (void)markObject:(id)object processor:(Class)processor;	// 0x339f5079
- (void)removeAllObjects;	// 0x339e73bd
- (void)removeProcessorClass:(Class)aClass;	// 0x33b80bbd
@end

