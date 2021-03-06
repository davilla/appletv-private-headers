/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface CHPChangeDirection : EDProcessor {
}
- (void)addDataValue:(id)value to:(id)to withIndex:(int)index;	// 0x34549e45
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x3454904d
- (void)changeChartDirection:(id)direction sheet:(id)sheet;	// 0x34549061
- (void)cleanUpOldSeriesCollection:(id)collection;	// 0x3454a6b5
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x34549319
- (id)getGraphicPropertiesForSeriesWithIndex:(int)index fromCollection:(id)collection isVaryColors:(bool)colors forChart:(id)chart;	// 0x34549845
- (id)getSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x345492c1
- (bool)isObjectSupported:(id)supported;	// 0x344ed095
- (void)mapSeriesCollection:(id)collection from:(id)from forChart:(id)chart;	// 0x34549a0d
- (void)mapSeriesValues:(id)values to:(id)to forIndex:(unsigned)index byRow:(bool)row forChart:(id)chart;	// 0x34549ed5
@end

