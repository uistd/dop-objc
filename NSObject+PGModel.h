//
//  NSObject+PGModel.h
//  FFPangu
//
//  Created by Whirlwind on 2017/8/9.
//

#import <Foundation/Foundation.h>

@interface NSObject (PGModel)

+ (instancetype)pg_dictionaryDecode:(NSDictionary *)dict_map;
+ (NSArray *)pg_arrayDecode:(NSArray *)array_map;

@end
