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
@property(retain, nonatomic) SAStockObject *aceStock;	// G=0x3795ac15; S=0x3795ac69; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x3795aca5; S=0x3795ad21; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x3795ad81; S=0x3795ae21; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x3795aea1; S=0x3795af1d; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x3795af85; S=0x3795b001; 
+ (id)addCompleted;	// 0x3795ab85
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3795abc9
// declared property getter: - (id)aceStock;	// 0x3795ac15
- (id)encodedClassName;	// 0x3795ab79
- (id)groupIdentifier;	// 0x3795ab69
// declared property getter: - (id)identifier;	// 0x3795aca5
// declared property getter: - (id)results;	// 0x3795ad81
// declared property setter: - (void)setAceStock:(id)stock;	// 0x3795ac69
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3795ad21
// declared property setter: - (void)setResults:(id)results;	// 0x3795ae21
// declared property setter: - (void)setStockReferences:(id)references;	// 0x3795af1d
// declared property setter: - (void)setStocks:(id)stocks;	// 0x3795b001
// declared property getter: - (id)stockReferences;	// 0x3795aea1
// declared property getter: - (id)stocks;	// 0x3795af85
@end
