/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : NSObject {
}
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)xl;	// 0x34dd9895
+ (int)convertEDVerticalAlignmentEnumToXl:(int)xl;	// 0x34dd98c5
+ (int)convertXlHorizAlignEnumToED:(int)ed;	// 0x34c5d365
+ (int)convertXlVertAlignEnumToED:(int)ed;	// 0x34c5d3c9
+ (id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign *)xlDXfAlign;	// 0x34dd98e5
+ (id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x34cdcc4d
+ (id)edAlignmentInfoFromXlXf:(XlXf *)xlXf;	// 0x34c5d189
+ (void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo *)xlGraphicsInfo;	// 0x34dd9aa1
+ (void)writeAlignmentInfo:(id)info toXlXf:(XlXf *)xlXf;	// 0x34dd99b5
+ (XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;	// 0x34dd9b11
@end

