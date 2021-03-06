/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray, NSURL, SAStockObject;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SAStockObject *aceStock;	// G=0x366136a9; S=0x366136fd; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x36613739; S=0x366137b5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x36613815; S=0x366138b5; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x36613935; S=0x366139b1; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x36613a19; S=0x36613a95; 
+ (id)addCompleted;	// 0x36613619
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3661365d
// declared property getter: - (id)aceStock;	// 0x366136a9
- (id)encodedClassName;	// 0x3661360d
- (id)groupIdentifier;	// 0x366135fd
// declared property getter: - (id)identifier;	// 0x36613739
// declared property getter: - (id)results;	// 0x36613815
// declared property setter: - (void)setAceStock:(id)stock;	// 0x366136fd
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x366137b5
// declared property setter: - (void)setResults:(id)results;	// 0x366138b5
// declared property setter: - (void)setStockReferences:(id)references;	// 0x366139b1
// declared property setter: - (void)setStocks:(id)stocks;	// 0x36613a95
// declared property getter: - (id)stockReferences;	// 0x36613935
// declared property getter: - (id)stocks;	// 0x36613a19
@end

