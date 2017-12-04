//
//  NSObject+PGModel.m
//  FFPangu
//
//  Created by Whirlwind on 2017/8/9.
//

#import "NSObject+PGModel.h"

@implementation NSObject (PGModel)

- (void)dictionaryDecode:(NSDictionary*) dict_map {

}

+ (instancetype)pg_dictionaryDecode:(NSDictionary *)dict_map {
    id obj = [[self alloc] init];
    [obj dictionaryDecode:dict_map];
    return obj;
}

+ (NSArray *)pg_arrayDecode:(NSArray *)array_map {
    NSMutableArray *result = [NSMutableArray arrayWithCapacity:array_map.count];
    for (id dict in array_map) {
        id obj = [[self alloc] init];
        [obj dictionaryDecode:dict];
        [result addObject:obj];
    }
    return result;
}

@end
