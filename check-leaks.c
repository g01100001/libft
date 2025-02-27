/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leaks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:23:17 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/09 14:23:22 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>  // for printing to the console>

// Define a mapping function to be used with ft_strmapi
char my_mapping_function(unsigned int i, char c) {
    return c + i;  // Example modification
}

int main() {
    // Testing ft_calloc
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr) {
        printf("ft_calloc test passed.\n");
        free(arr);
    } else {
        printf("ft_calloc test failed.\n");
    }

    // Testing ft_strdup
    char *dup = ft_strdup("Hello, 42!");
    if (dup) {
        printf("ft_strdup: %s\n", dup);
        free(dup);
    } else {
        printf("ft_strdup test failed.\n");
    }

    // Testing ft_strjoin
    char *joined = ft_strjoin("Hello, ", "world!");
    if (joined) {
        printf("ft_strjoin: %s\n", joined);
        free(joined);
    } else {
        printf("ft_strjoin test failed.\n");
    }

    // Testing ft_strtrim
    char *trimmed = ft_strtrim("  42 is awesome!  ", " ");
    if (trimmed) {
        printf("ft_strtrim: '%s'\n", trimmed);
        free(trimmed);
    } else {
        printf("ft_strtrim test failed.\n");
    }

    // Testing ft_substr
    char *substr = ft_substr("Hello, world!", 7, 5);
    if (substr) {
        printf("ft_substr: %s\n", substr);
        free(substr);
    } else {
        printf("ft_substr test failed.\n");
    }

    // Testing ft_strmapi
    char *strmapi_result = ft_strmapi("42", my_mapping_function);
    if (strmapi_result) {
        printf("ft_strmapi: %s\n", strmapi_result);
        free(strmapi_result);
    } else {
        printf("ft_strmapi test failed.\n");
    }

    return 0;
}

