/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 21:54:57 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/01 10:08:57 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    if (argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
            cout << (char)std::toupper(argv[i][j]);
        }
        cout << endl;
    }
    return (0);
}
